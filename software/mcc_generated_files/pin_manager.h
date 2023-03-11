/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F15223
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set PUMP_LED aliases
#define PUMP_LED_TRIS                 TRISAbits.TRISA2
#define PUMP_LED_LAT                  LATAbits.LATA2
#define PUMP_LED_PORT                 PORTAbits.RA2
#define PUMP_LED_WPU                  WPUAbits.WPUA2
#define PUMP_LED_OD                   ODCONAbits.ODCA2
#define PUMP_LED_ANS                  ANSELAbits.ANSA2
#define PUMP_LED_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define PUMP_LED_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define PUMP_LED_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define PUMP_LED_GetValue()           PORTAbits.RA2
#define PUMP_LED_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define PUMP_LED_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define PUMP_LED_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define PUMP_LED_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define PUMP_LED_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define PUMP_LED_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define PUMP_LED_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define PUMP_LED_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set PUMP_SW aliases
#define PUMP_SW_TRIS                 TRISAbits.TRISA4
#define PUMP_SW_LAT                  LATAbits.LATA4
#define PUMP_SW_PORT                 PORTAbits.RA4
#define PUMP_SW_WPU                  WPUAbits.WPUA4
#define PUMP_SW_OD                   ODCONAbits.ODCA4
#define PUMP_SW_ANS                  ANSELAbits.ANSA4
#define PUMP_SW_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define PUMP_SW_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define PUMP_SW_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define PUMP_SW_GetValue()           PORTAbits.RA4
#define PUMP_SW_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define PUMP_SW_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define PUMP_SW_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define PUMP_SW_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define PUMP_SW_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define PUMP_SW_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define PUMP_SW_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define PUMP_SW_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set PUMP_EN aliases
#define PUMP_EN_TRIS                 TRISAbits.TRISA5
#define PUMP_EN_LAT                  LATAbits.LATA5
#define PUMP_EN_PORT                 PORTAbits.RA5
#define PUMP_EN_WPU                  WPUAbits.WPUA5
#define PUMP_EN_OD                   ODCONAbits.ODCA5
#define PUMP_EN_ANS                  ANSELAbits.ANSA5
#define PUMP_EN_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define PUMP_EN_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define PUMP_EN_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define PUMP_EN_GetValue()           PORTAbits.RA5
#define PUMP_EN_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define PUMP_EN_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define PUMP_EN_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define PUMP_EN_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define PUMP_EN_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define PUMP_EN_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define PUMP_EN_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define PUMP_EN_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set STAT_LED aliases
#define STAT_LED_TRIS                 TRISCbits.TRISC0
#define STAT_LED_LAT                  LATCbits.LATC0
#define STAT_LED_PORT                 PORTCbits.RC0
#define STAT_LED_WPU                  WPUCbits.WPUC0
#define STAT_LED_OD                   ODCONCbits.ODCC0
#define STAT_LED_ANS                  ANSELCbits.ANSC0
#define STAT_LED_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define STAT_LED_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define STAT_LED_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define STAT_LED_GetValue()           PORTCbits.RC0
#define STAT_LED_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define STAT_LED_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define STAT_LED_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define STAT_LED_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define STAT_LED_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define STAT_LED_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define STAT_LED_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define STAT_LED_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LVL_SW2 aliases
#define LVL_SW2_TRIS                 TRISCbits.TRISC1
#define LVL_SW2_LAT                  LATCbits.LATC1
#define LVL_SW2_PORT                 PORTCbits.RC1
#define LVL_SW2_WPU                  WPUCbits.WPUC1
#define LVL_SW2_OD                   ODCONCbits.ODCC1
#define LVL_SW2_ANS                  ANSELCbits.ANSC1
#define LVL_SW2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LVL_SW2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LVL_SW2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LVL_SW2_GetValue()           PORTCbits.RC1
#define LVL_SW2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LVL_SW2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LVL_SW2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LVL_SW2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LVL_SW2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LVL_SW2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LVL_SW2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LVL_SW2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LVL_SW1 aliases
#define LVL_SW1_TRIS                 TRISCbits.TRISC2
#define LVL_SW1_LAT                  LATCbits.LATC2
#define LVL_SW1_PORT                 PORTCbits.RC2
#define LVL_SW1_WPU                  WPUCbits.WPUC2
#define LVL_SW1_OD                   ODCONCbits.ODCC2
#define LVL_SW1_ANS                  ANSELCbits.ANSC2
#define LVL_SW1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LVL_SW1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LVL_SW1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LVL_SW1_GetValue()           PORTCbits.RC2
#define LVL_SW1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LVL_SW1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LVL_SW1_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LVL_SW1_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LVL_SW1_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LVL_SW1_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LVL_SW1_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LVL_SW1_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set MOIST_V aliases
#define MOIST_V_TRIS                 TRISCbits.TRISC4
#define MOIST_V_LAT                  LATCbits.LATC4
#define MOIST_V_PORT                 PORTCbits.RC4
#define MOIST_V_WPU                  WPUCbits.WPUC4
#define MOIST_V_OD                   ODCONCbits.ODCC4
#define MOIST_V_ANS                  ANSELCbits.ANSC4
#define MOIST_V_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define MOIST_V_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define MOIST_V_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define MOIST_V_GetValue()           PORTCbits.RC4
#define MOIST_V_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define MOIST_V_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define MOIST_V_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define MOIST_V_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define MOIST_V_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define MOIST_V_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define MOIST_V_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define MOIST_V_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF2 pin functionality
 * @Example
    IOCCF2_ISR();
 */
void IOCCF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_InterruptHandler);

*/
extern void (*IOCCF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);

*/
void IOCCF2_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/