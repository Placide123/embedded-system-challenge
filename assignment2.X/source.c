/*
 * File:   source.c
 * Author: TWIRINGIYIMANA
 *
 * Created on July 17, 2021, 10:26 AM
 */


#include <xc.h>
#define _XTAL_FREQ 8000000

void main(void) {
    //char seg_code[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
    //char seg_code[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};
    
    unsigned char disp[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
    
    

    /* Configure the ports as output */
    TRISC = 0x00;

    while (1) 
    {
        int i;
        for (i=0; i<10; i++) // loop to display 0-9
        {
            PORTC = disp[i]; 
            __delay_ms(1000);
        }
    }
    return;
}