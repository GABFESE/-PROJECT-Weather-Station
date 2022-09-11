#include <18F2550.h>
#use delay(internal=8MHz)
#use rs232(baud=9600, xmit=PIN_A3, rcv=PIN_A4)    // Initialize software UART
#use fast_io(A)
#use i2c(Master,Fast,sda=PIN_A1,scl=PIN_A0)
