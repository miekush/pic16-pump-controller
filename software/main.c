
#include "mcc_generated_files/mcc.h"

uint8_t pumpState = false;
uint16_t pumpCounter = 0;
const uint16_t tankFillTime = 5000;

uint16_t ledCounter = 0;
const uint16_t ledPeriod = 500;

//function prototypes
void levelSwISR(void);
void timer0ISR(void);

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    //attach interrupt handlers
    TMR0_SetInterruptHandler(timer0ISR);
    IOCCF2_SetInterruptHandler(levelSwISR);

    TMR0_StartTimer();
    
    while (1)
    {
        //pump on
        if((pumpState || !PUMP_SW_GetValue()) && !LVL_SW2_GetValue())
        {
            PUMP_EN_SetHigh();
            PUMP_LED_SetHigh();
            
            if(ledCounter > ledPeriod)
            {
                STAT_LED_Toggle();
                ledCounter = 0;
            }
        }
        //pump off
        else
        {
            PUMP_EN_SetLow();
            PUMP_LED_SetLow();
            
            if(!LVL_SW2_GetValue())
            {
                STAT_LED_SetHigh();
            }
            else
            {
                STAT_LED_SetLow();
            }
        }
    }
}

void levelSwISR(void)
{
    pumpState = true;
    pumpCounter = 0;
    ledCounter = 0;
}

void timer0ISR(void)
{
    pumpCounter++;
    ledCounter++;
    
    if(pumpState && (pumpCounter > tankFillTime))
    {
        pumpState = false;
    }
}