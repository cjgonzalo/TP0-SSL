#include "scanner.h"

int main(){
  int token;
  token = get_token();
  while(token != FDT){
    switch(token){
      case CAD:
        printf("Cadena: %s\n", buffer);
        buffer[0] = '\0';
        break;
      case SEP:
        printf("Separador: %c\n", buffer[0]);
        break;
      case FDT:
        printf("Fin de texto");
        break;
    }
    token = get_token();
  }

  return 0;
}