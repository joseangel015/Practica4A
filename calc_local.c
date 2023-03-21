/* Programa random_local.c que incluye unicamente el programa main */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "calc_local.h"

int main(int argc, char *argv[]){
	int a,b;
	if(argc != 4) {
		printf("%s:Error en los param\n", argv[0]);
		exit(1);
	}
    a = (long)atoi(argv[2]);
	b = atoi(argv[3]);
    int res = 0;
    char *operacion = argv[1];
    
    if (strcmp(operacion,"suma") == 0){
        res = suma(a,b);
        printf("\n%d\n",res);
    }else if (strcmp(operacion,"resta") == 0){
        res = resta(a,b);
        printf("\n%d\n",res);
    }else if (strcmp(operacion,"multiplicacion") == 0){
        res = multiplicacion(a,b);
        printf("\n%d\n",res);
    }else if (strcmp(operacion,"division") == 0){
        res = division(a,b);
        printf("\n%d\n",res);
    }else{
        printf("\noperacion no existente en la calculadora\n");
    }
	exit(0);
}
