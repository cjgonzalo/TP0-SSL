#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char buffer[100] ;

int get_token();

enum TOKEN {
    FDT, // Fin de texto
    SEP, // Separador
    CAD // Cadena
};