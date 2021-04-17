#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones_calculadora.h"

int menu(){
	int opcion;
	printf("\n\n\tCalculadora:\n");
	printf("\n\t1. Ingrese 1er numero");
	printf("\n\t2. Ingrese 2do numero");
	printf("\n\t3. Realizar todos los calculos");
	printf("\n\t4. Informar los resultados de los calculos");
	printf("\n\t5. Salir\n");
	printf("\n\tOpción: ");
	scanf("%d", &opcion);
	return opcion;
}

int salir_calculadora(){
    char opcion;
    int retornar = 0;
    printf("\n\t   Se encuentra seguro de que desea salir? s/n ");
    fflush(stdin);
    scanf("%c", &opcion);
    if(opcion == 's' || opcion == 'S') retornar=1;
    return retornar;
}

int pedir_numero(int* numero){
    int resultado = 0;
    if(numero != NULL){
        printf("\n\tIngrese un numero: ");
        resultado = scanf("%d", numero);
    }
    return resultado;
}

void imprimir_mensaje_error(char mensaje_error[]){
	printf("\n\t-------------------------------------------------------------");
	printf("\n\t%s", mensaje_error);
	printf("\n\t-------------------------------------------------------------\n\n");
}

void imprimir_numeros(int primer_numero, int segundo_numero){
	printf("\n\t-----------------");
	printf("\n\t(A=%d) & (B=%d)", primer_numero, segundo_numero);
	printf("\n\t-----------------");
}

int hacer_calculos(int primer_num, int segundo_num, int *suma, int *resta, int *multiplicacion, float *division, int *primer_factorial, int *segundo_factorial){
    int resultado = 0;
    if(suma != NULL && resta != NULL && multiplicacion != NULL && division != NULL && primer_factorial != NULL && segundo_factorial != NULL){
        *suma = sumar_numeros(primer_num, segundo_num);
        *resta = restar_numeros(primer_num, segundo_num);
        *multiplicacion = multiplicar_numeros(primer_num, segundo_num);
        *division = dividir_numeros(primer_num, segundo_num);
        *primer_factorial = factorial_numeros(primer_num);
        *segundo_factorial = factorial_numeros(segundo_num);
        resultado = 1;
    }
    return resultado;
}

int sumar_numeros(int primer_num, int segundo_num){
    return primer_num + segundo_num;
}
int restar_numeros(int primer_num, int segundo_num){
    return primer_num - segundo_num;
}
int multiplicar_numeros(int primer_num, int segundo_num){
    return primer_num * segundo_num;
}
float dividir_numeros(int primer_num, int segundo_num){
    float resultado = 0;
    if(segundo_num !=0 ){
        resultado = (float) primer_num / (float) segundo_num;
    }
    return resultado;
}

int factorial_numeros(int numero){
    int factorial = 1;
	for (int i = 0; i < numero; i++) {
		factorial = factorial * (i + 1);
	}
	return factorial;
}

void resultados(int primer_num, int segundo_num, int *suma, int *resta, int *multiplicacion, float *division, int *primer_factorial, int *segundo_factorial){
    printf("\n\t-------------------------------------------------------------------");
    printf("\n\t                         RESULTADOS");
    printf("\n\t-------------------------------------------------------------------");
    printf("\n\tEl resultado de sumar %d+%d es: %d", primer_num, segundo_num, *suma);
    printf("\n\tEl resultado de restar %d-%d es: %d", primer_num, segundo_num, *resta);
    printf("\n\tEl resultado de multiplicar %d*%d es: %d", primer_num, segundo_num, *multiplicacion);
    if(segundo_num != 0){
    	printf("\n\tEl resultado de dividir %d/%d es: %.2f", primer_num, segundo_num, *division);
    }
    else{
    	printf("\n\tEl resultado de dividir %d/%d es: ERROR!", primer_num, segundo_num);
    }
    if(primer_num >= 0 && primer_num <=12){
    	printf("\n\tEl factorial de %d es: %d ", primer_num, *primer_factorial);
    }
    else{
    	printf("\n\tNo se puede mostrar el factorial del primer numero ");
    }
    if(segundo_num >=0 && segundo_num <=12){
    	printf("y el factorial de %d es: %d", segundo_num, *segundo_factorial);
    }
    else{
    	printf("y no se puede mostrar el factorial del segundo numero");
    }
    printf("\n\t-------------------------------------------------------------------");
}
