/*
 * ports.c
 *
 *  Created on: Sep 17, 2024
 *      Author: shesh
 */

#include  "ports.h"
#include "macros.h"
#include "msp430.h"

void Init_Ports(void){
    Init_Ports1();
    Init_Ports2();
    Init_Ports3();
    Init_Ports4();
    Init_Ports5();
    Init_Ports6();
}


// ------------- port 1
void Init_Ports1(void){
   // ----------------------------------------------------------------------------
    P1OUT = 0X00; // P1 set low
    P1DIR = 0x00; // Set P1 direction to output

    P1SEL0 &= ~RED_LED; // RedLED  GPIO Operation
    P1SEL1 &= ~RED_LED; //
    P1OUT &= ~RED_LED; // initial value = off
    P1DIR |= RED_LED; // direction = output

    P1SEL0 |= V_A1_SEEED; // function so 1 1
    P1SEL1 |= V_A1_SEEED;

    P1SEL0 |= V_DETECT_L; // function so 1 1
    P1SEL1 |= V_DETECT_L;

    P1SEL0 |= V_DETECT_R; // function so 1 1
    P1SEL1 |= V_DETECT_R;

    P1SEL0 |= V_A4_SEEED; // function so 1 1
    P1SEL1 |= V_A4_SEEED;

    P1SEL0 |= V_THUMB; // function so 1 1
    P1SEL1 |= V_THUMB;

    P1SEL0 &= ~UCA0RXD; // 0
    P1SEL1 |= UCA0RXD; // 1

    P1SEL0 &= ~UCA0TXD; // 0
    P1SEL1 |= UCA0TXD; // 1
   // --------------------------------------------------------------
}

// -------------- port 2
void Init_Ports2(void){
    //------------------------------------------------------------------------------
     P2OUT = 0x00; // P2 set Low
     P2DIR = 0x00; // Set P2 direction to output

     P2SEL0 &= ~SLOW_CLK; // SLOW_CLK GPIO operation
     P2SEL1 &= ~SLOW_CLK; // SLOW_CLK GPIO operation
     P2OUT &= ~SLOW_CLK; // Initial Value = Low / Off
     P2DIR |= SLOW_CLK; // Direction = output

     P2SEL0 &= ~CHECK_BAT; // CHECK_BAT GPIO operation
     P2SEL1 &= ~CHECK_BAT; // CHECK_BAT GPIO operation
     P2OUT &= ~CHECK_BAT; // Initial Value = Low / Off
     P2DIR |= CHECK_BAT; // Direction = output

     P2SEL0 &= ~IR_LED; // P2_2 GPIO operation
     P2SEL1 &= ~IR_LED; // P2_2 GPIO operation
     P2OUT &= ~IR_LED; // Initial Value = Low / Off
     P2DIR |= IR_LED; // Direction = output

     P2SEL0 &= ~SW2; // SW2 Operation
     P2SEL1 &= ~SW2; // SW2 Operation
     P2OUT |= SW2; // Configure pullup resistor
     P2DIR &= ~SW2; // Direction = input
     P2REN |= SW2; // Enable pullup resistor

     P2SEL0 &= ~IOT_RUN_RED; // IOT_RUN_CPU GPIO operation
     P2SEL1 &= ~IOT_RUN_RED; // IOT_RUN_CPU GPIO operation
     P2OUT &= ~IOT_RUN_RED; // Initial Value = Low / Off
     P2DIR |= IOT_RUN_RED; // Direction = output

     P2SEL0 &= ~DAC_ENB; // DAC_ENB GPIO operation
     P2SEL1 &= ~DAC_ENB; // DAC_ENB GPIO operation
     P2OUT |= DAC_ENB; // Initial Value = High
     P2DIR |= DAC_ENB; // Direction = output

     P2SEL0 &= ~LFXOUT; // LFXOUT Clock operation
     P2SEL1 |= LFXOUT; // LFXOUT Clock operation

     P2SEL0 &= ~LFXIN; // LFXIN Clock operation
     P2SEL1 |= LFXIN; // LFXIN Clock operation
     //------------------------------------------------------------------------------
}

// -------------- port 3
void Init_Ports3(void){
    // -----------------------------------------------------------------------------
    P3OUT = 0x00;
    P3DIR = 0x00;

    P3SEL0 &= ~TEST_PROBE; // gp io
    P3SEL1 &= ~TEST_PROBE;
    P3OUT &= ~TEST_PROBE; // initial value = low
    P3DIR |= TEST_PROBE; // direction output

    P3SEL0 &= ~OA2O; // gp io
    P3SEL1 &= ~OA2O;
    P3OUT &= ~OA2O; // initial value = low
    P3DIR |= OA2O; // direction output

    P3SEL0 &= ~OA2N; // gp io
    P3SEL1 &= ~OA2N;
    P3OUT &= ~OA2N; // initial value = low
    P3DIR |= OA2N; // direction output

    P3SEL0 &= ~OA2P; // gp io
    P3SEL1 &= ~OA2P;
    P3OUT &= ~OA2P; // initial value = low
    P3DIR |= OA2P; // direction output

    P3SEL0 &= ~SMCLK_OUT; // gp io
    P3SEL1 &= ~SMCLK_OUT;
    P3OUT &= ~SMCLK_OUT; // initial value = low
    P3DIR |= SMCLK_OUT; // direction output

    P3SEL0 &= ~DAC_CNTL; // gp io
    P3SEL1 &= ~DAC_CNTL;
    P3OUT &= ~DAC_CNTL; // initial value = low
    P3DIR |= DAC_CNTL; // direction output

    P3SEL0 &= ~IOT_LINK_GRN; // gp io
    P3SEL1 &= ~IOT_LINK_GRN;
    P3OUT &= ~IOT_LINK_GRN; // initial value = low
    P3DIR |= IOT_LINK_GRN; // direction output

    P3SEL0 &= ~IOT_EN; // gp io
    P3SEL1 &= ~IOT_EN;
    P3OUT &= ~IOT_EN; // initial value = low
    P3DIR |= IOT_EN; // direction output
    // ----------------------------------------------------------------------------
}

// -------------- port 4
void Init_Ports4(void){
    //------------------------------------------------------------------------------
     P4OUT = 0x00; // P4 set Low
     P4DIR = 0x00; // Set P4 direction to output

     P4SEL0 &= ~RESET_LCD; // RESET_LCD GPIO operation
     P4SEL1 &= ~RESET_LCD; // RESET_LCD GPIO operation
     P4OUT &= ~RESET_LCD; // Initial Value = Low / Off
     P4DIR |= RESET_LCD; // Direction = output

     P4SEL0 &= ~SW1; // SW1 GPIO operation
     P4SEL1 &= ~SW1; // SW1 GPIO operation
     P4DIR &= ~SW1; // Direction = input
     P4REN |= SW1; // Enable pullup resistor

     P4SEL0 |= UCA1TXD; // USCI_A1 UART operation
     P4SEL1 &= ~UCA1TXD; // USCI_A1 UART operation
     P4SEL0 |= UCA1RXD; // USCI_A1 UART operation
     P4SEL1 &= ~UCA1RXD; // USCI_A1 UART operation

     P4SEL0 &= ~UCB1_CS_LCD; // UCB1_CS_LCD GPIO operation
     P4SEL1 &= ~UCB1_CS_LCD; // UCB1_CS_LCD GPIO operation
     P4OUT |= UCB1_CS_LCD; // Set SPI_CS_LCD Off [High]
     P4DIR |= UCB1_CS_LCD; // Set SPI_CS_LCD direction to output

     P4SEL0 |= UCB1CLK; // UCB1CLK SPI BUS operation
     P4SEL1 &= ~UCB1CLK; // UCB1CLK SPI BUS operation

     P4SEL0 |= UCB1SIMO; // UCB1SIMO SPI BUS operation
     P4SEL1 &= ~UCB1SIMO; // UCB1SIMO SPI BUS operation

     P4SEL0 |= UCB1SOMI; // UCB1SOMI SPI BUS operation
     P4SEL1 &= ~UCB1SOMI; // UCB1SOMI SPI BUS operation
     //------------------------------------------------------------------------------
}

// --------------- port 5
void Init_Ports5(void){
    // ----------------------------------------------------------------------------

    P5OUT = 0x00;
    P5DIR = 0x00;

    P5SEL0 &= ~V_BAT; // gp io
    P5SEL1 &= ~V_BAT;
    P5OUT &= ~V_BAT; // initial value low
    P5DIR |= V_BAT; // direction output

    P5SEL0 &= ~V_5_0; // gp io
    P5SEL1 &= ~V_5_0;
    P5OUT &= ~V_5_0; // initial value low
    P5DIR |= V_5_0; // direction output

    P5SEL0 &= ~V_DAC; // gp io
    P5SEL1 &= ~V_DAC;
    P5OUT &= ~V_DAC; // initial value low
    P5DIR |= V_DAC; // direction output

    P5SEL0 &= ~V_3_3; // gp io
    P5SEL1 &= ~V_3_3;
    P5OUT &= ~V_3_3; // initial value low
    P5DIR |= V_3_3; // direction output

    P5SEL0 &= ~IOT_BOOT; // gp io
    P5SEL1 &= ~IOT_BOOT;
    P5OUT &= ~IOT_BOOT; // initial value low
    P5DIR |= IOT_BOOT; // direction output
    // --------------------------------------------------------------
}

// --------------- port 6
void Init_Ports6(void){
    // -----------------------------------------------------------

    P6OUT = 0x00;
    P6DIR = 0x00;

    P6SEL0 &= ~LCD_BACKLITE; // gp io
    P6SEL1 &= ~LCD_BACKLITE;
    P6OUT |= LCD_BACKLITE; // initial value low
    P6DIR |= LCD_BACKLITE; // direction output

    P6SEL0 &= ~R_FORWARD; // gp io
    P6SEL1 &= ~R_FORWARD;
    P6OUT &= ~R_FORWARD; // initial value low
    P6DIR |= R_FORWARD; // direction output

    P6SEL0 &= ~R_REVERSE; // gp io
    P6SEL1 &= ~R_REVERSE;
    P6OUT &= ~R_REVERSE; // initial value low
    P6DIR |= R_REVERSE; // direction output

    P6SEL0 &= ~L_FORWARD; // gp io
    P6SEL1 &= ~L_FORWARD;
    P6OUT &= ~L_FORWARD; // initial value low
    P6DIR |= L_FORWARD; // direction output

    P6SEL0 &= ~L_REVERSE; // gp io
    P6SEL1 &= ~L_REVERSE;
    P6OUT &= ~L_REVERSE; // initial value low
    P6DIR |= L_REVERSE; // direction output

    P6SEL0 &= ~P6_5; // gp io
    P6SEL1 &= ~P6_5;
    P6OUT &= ~P6_5; // initial value low
    P6DIR |= P6_5; // direction output

    P6SEL0 &= ~GRN_LED; // gp io
    P6SEL1 &= ~GRN_LED;
    P6OUT &= ~GRN_LED; // initial value low
    P6DIR |= GRN_LED; // direction output
    // --------------------------------------------------------------------
}


