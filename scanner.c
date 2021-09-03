#include "scanner.h"

int get_token(){
   char caracter = getchar();
   if(caracter == EOF){
      return FDT;
   } else if(caracter == ','){
      buffer[0] = caracter;
      return SEP;
   } else if(!isspace(caracter)){
      int i;
      for(i = 0; caracter != EOF && caracter != ',' && isspace(caracter); i++){
         buffer[i] = caracter;
         caracter = getchar();
      }
      ungetc(caracter, stdin);
      buffer[i] = '\0';
      return CAD;
   }
}