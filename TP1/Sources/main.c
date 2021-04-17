#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "funciones_calculadora.h"

int main(void) {
	setbuf(stdout, NULL);

	int salir = 0;
	int flag_primer_num = 0;
	int flag_segundo_num = 0;
	int flag_calculos_realizados = 0;
	int primer_numero = 0;
	int segundo_numero = 0;
	int suma = 0;
	int resta = 0;
	int multiplicacion = 0;
	float division = 0;
	int primer_factorial = 0;
	int segundo_factorial = 0;

	do {
		switch (menu()) {
			case 1:
				flag_primer_num = pedir_numero(&primer_numero);
				break;
			case 2:
				flag_segundo_num = pedir_numero(&segundo_numero);
				break;
			case 3:
				if(flag_primer_num && flag_segundo_num){
					imprimir_numeros(primer_numero, segundo_numero);
					flag_calculos_realizados = hacer_calculos(primer_numero, segundo_numero, &suma, &resta, &multiplicacion, &division, &primer_factorial, &segundo_factorial);
				} else {
					imprimir_mensaje_error("Para poder realizar los calculos, primero debe ingresar los valores a calcular");
				}
				break;
			case 4:
				if(flag_calculos_realizados){
					resultados(primer_numero, segundo_numero, &suma, &resta, &multiplicacion, &division, &primer_factorial, &segundo_factorial);
				} else {
					imprimir_mensaje_error("Para informar los calculos tiene que calcular primero");
				}
				break;
			case 5:
				flag_primer_num = 0;
				flag_segundo_num = 0;
				flag_calculos_realizados = 0;
				salir = salir_calculadora();
				break;
			default:
				imprimir_mensaje_error("La opcion ingresada no es valida\n\tPor favor intente nuevamente.");
				fflush(stdin);
				break;
		}
	}
	while (salir == 0);
	return EXIT_SUCCESS;
}
