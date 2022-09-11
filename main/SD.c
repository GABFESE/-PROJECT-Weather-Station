// Include MMC/SD card driver source file
#include <mmcsd_m.c>
 
// Include FAT library source file
#include <fat_m.c>

 int8 i, dato;
 FILE myfile;
 
void initialize(){ 
   printf("\r\n\nInitialize FAT library ... ");
   delay_ms(100);
   // Initializing the FAT library as well as the SD card ---> returns 0 if OK
   i = fat_init();
   if(i != 0){
      printf("Error initializing FAT library!\r\n");
      while(1){
      }
   }
   else{
      printf("FAT Library initialized ... ");
      delay_ms(100); 
      // Display SD card type ---> MMC, SDSC or SDHC
      printf("Card Type: ");
    switch(g_card_type) {
      case MMC: printf("MMC \r\n"); break;
      case SDSC: printf("SDSC \r\n"); break;
      case SDHC: printf("SDHC \r\n");
      delay_ms(100);
    }
  }
}

//!void create_folder(){
//!    // Create folder 'Test Dir'
//!    printf("Create 'Test Dir' folder ... ");
//!    if(mk_dir("/Test Dir/") == 0)
//!      printf("OK \r\n");
//!    else
//!      printf("error creating folder \r\n");
//!    delay_ms(1);
//!}

void create_doc(){
    // Create a text file 'log.txt'
    printf("Create 'Datos.txt' file ---> ");
    if(mk_file("/Datos.txt") == 0)
      printf("OK \r\n");
    else
      printf("error creating file \r\n");
    delay_ms(1);
}

void eliminate_doc(){
    // Create a text file 'log.txt'
    printf("eliminating 'Datos.txt' file ---> ");
    if(rm_file("/Datos.txt") == 0)
      printf("OK \r\n");
    else
      printf("error eliminating file \r\n");
    delay_ms(1);
}

void open_doc(){
    // Open the last created file 'log.txt' with write permission ('w') "r" = read "w" = write "a" = append "rb" = read binarily         
//    printf("Open 'Datos.txt' file ---> ");                                              
    if(fatopen("/Datos.txt", "a", &myfile) != 0)                                      
      printf("  error opening file \r\n");                                    
    else {
//      printf("OK \r\n");
    }
}

void write_docu(int dato){
      // Write some thing to the text file
      char txt[50];
//      printf("Writing to the text file 'Datos.txt' ---> ");
      sprintf(txt, "%02u", dato);
      if(fatputs(txt, &myfile) == 0){
        printf(txt);
//        printf(" ---> OK \r\n");
      }
      else{
        printf("  writing error \r\n");
      }
}

void write_docf(float dato){
      // Write some thing to the text file
      char txt[50];
//      printf("Writing to the text file 'Datos.txt' ---> ");
      sprintf(txt, "%05f", dato);
      if(fatputs(txt, &myfile) == 0){
        printf(txt);
//        printf(" ---> OK \r\n");
      }
      else{
        printf(" ---> writing error \r\n");
      }
}

void enter(){
   fatputs("\r\n", &myfile);
}

void close_doc(){
      // Now close the file
//      printf("Closing the file 'Datos.txt' ---> ");
      if(fatclose(&myfile) == 0){
//        printf("OK \r\n");
      }
      else{
        printf("  closing error \r\n");}
}

void read_doc(){
    // Reading 'log.txt' file
    printf("Reading 'Datos.txt' file: \r\n");
    // Open 'log.txt' file with read permission ('r')
//!    printf("Open 'log.txt' file ... ");
//!    if(fatopen("/log.txt", "r", &myfile) != 0)
//!      printf("error opening file");
//!    else {
//!      printf("OK");
//!      // Print the whole file
//!      printf("\r\nPrint 'log.txt' file:\r\n\r");
      fatopen("/Datos.txt", "r", &myfile);
      fatprintf(&myfile);
      // Now close the file
//      if(fatclose(&myfile) == 0)
        printf("\r\n\n");
//      else
//        printf("closing error \r\n\n");
    
}


