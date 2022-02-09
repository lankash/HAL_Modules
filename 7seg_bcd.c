/*

Code created by "LANKASH"
  @13/9/2021

File Contents : '7SEG' impelimentation Functions

*/

#include "DIO.h"
#include "7seg_bsd.h"

void sevenSEG_init_bcd(unsigned char port)    //Initializing the 'O/P' pins for the 7SEG-PCD.
{
  DIO_set_pin_dir(port,  BCD_pin,    1);
  DIO_set_pin_dir(port, (BCD_pin+1), 1);
  DIO_set_pin_dir(port, (BCD_pin+2), 1);
  DIO_set_pin_dir(port, (BCD_pin+3), 1);
}

void sevenSEG_write_bcd(unsigned char port, unsigned char num)
{
    DIO_write_nibble(port, num, BCD_nibble);
} 
