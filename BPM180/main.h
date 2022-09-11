#include <18F2550.h>
#device ADC=10
#use delay(internal=8MHz)
#use i2c(Master,Fast,sda=PIN_A0,scl=PIN_A1)
#use rs232(baud=115200,parity=N,xmit=PIN_A3,rcv=PIN_A4,stream=asd)
