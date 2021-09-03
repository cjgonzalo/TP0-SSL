#include "scanner.h"

int main(void){
  int token;
  do{
      token = get_token();
      switch(token){
         case CAD:
            printf("Cadena: %s\n", buffer);
            buffer[0] = '\0';
            break;
         case SEP:
            printf("Separador: %c\n", buffer[0]);
            break;
         case FDT:
            printf("Fin de texto \n");
            break;
      }
   }while(token != FDT);
   return 0;
}