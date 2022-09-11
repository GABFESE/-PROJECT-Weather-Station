#include <main.h>
#include <ads1115.c>

char txt[100];
int16 avis0,avis1;
float corr,mah1,mah2;
int hr2, min2, sec2;
long dato;

void main(){
   while(TRUE){
      delay_ms(10);
      datov0();
      delay_ms(10);
      datov1();
      delay_ms(10);   
      dato=x*6554;
      printf("%lu %05f\r\n",dato,y);
   }

}
