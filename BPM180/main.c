#include <main.h>
#include <BMP085.c>
float a,b,c,d;

void main(){
   bmp085Calibration();
   while(true){
      a = BMP085Pressure(true);  //  calls for temperature first
      b = BMP085Temperature(); 
      
      printf("T[c]: %.3g  \n\r",b);
      printf("P[c]: %.3g  \n\r\n\r",a);
      delay_ms(500);
   }
}
