BYTE ld,hd; //21845
int16 d;
float x,y,z;

float datov0(){
   d = 0;
   x = 0;
   i2c_start();
   i2c_write(0b10010000);  //llamado por direccion
   i2c_write(0b00000001);  //llamado de configuracion de registro
   i2c_write(0b11010000);  // 101
   i2c_write(0b11000011);  //10000011 // 11100011
   i2c_stop();
   
   i2c_start();
   i2c_write(0b10010000);  //frame 1
   i2c_write(0b00000000);  //frame 2
   i2c_stop();
   
   i2c_start();
   i2c_write(0b10010001);  //frame 3
   hd = i2c_read(1);
   ld = i2c_read(1);
   i2c_stop();
   
   d=hd<<8;
   d|=ld;
   if(d<30000){
      return x = (0.000187371)*d; //000305175
   }
   else{
      return x = 0.00000;
   }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float datov1(){
   d = 0;
   y = 0;
   i2c_start();
   i2c_write(0b10010000);  //llamado por direccion
   i2c_write(0b00000001);  //llamado de configuracion de registro
   i2c_write(0b11100000);  //100
   i2c_write(0b11000011);  //
   i2c_stop();
   
   i2c_start();
   i2c_write(0b10010000);  //frame 1
   i2c_write(0b00000000);  //frame 2
   i2c_stop();
   
   i2c_start();
   i2c_write(0b10010001);  //frame 3
   hd = i2c_read(1);
   ld = i2c_read(1);
   i2c_stop();
   
   d=hd<<8;
   d|=ld;
   if(d<30000){
      return y = (0.000187371)*d;
   }
   else{
      return y=0.00000;
   }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float datov2(){
   d = 0;
   z = 0;
   i2c_start();
   i2c_write(0b10010000);  //llamado por direccion
   i2c_write(0b00000001);  //llamado de configuracion de registro
   i2c_write(0b11000000);  //
   i2c_write(0b11000011);  //
   i2c_stop();
   
   i2c_start();
   i2c_write(0b10010000);  //frame 1
   i2c_write(0b00000000);  //frame 2
   i2c_stop();
   
   i2c_start();
   i2c_write(0b10010001);  //frame 3
   hd = i2c_read(1);
   ld = i2c_read(1);
   i2c_stop();
   
   d=hd<<8;
   d|=ld;
   if(d<30000){
      return z = (0.000187371)*d;
   }
   else{
      return z=0.00000;
   }
}
