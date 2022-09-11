#include <main.h>
#include <DHT22.c>

float Temperatura,Humedad;

void main(){
delay_ms(1000);
printf("\r\n");
  while(TRUE){
    Temperatura=dat_DHT22(0);
    printf("%0.1f  ",Temperatura);

    Humedad=dat_DHT22(1);             
    printf("%0.1f\r\n",Humedad);
  }
}
