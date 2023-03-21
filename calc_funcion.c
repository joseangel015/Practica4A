/* Archivo calc_funcion.c que incluye la definición de las funciones a utilizar */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "calc_local.h"


int suma(int a,int b){
    int resultado = a +b;
    return resultado;
}

int resta(int a,int b){
    int resultado = a -b;
    return resultado;
}

int multiplicacion(int a,int b){
    int resultado = a *b;
    return resultado;
}

int division(int a,int b){
    int resultado = a/b;
    return resultado;
}
