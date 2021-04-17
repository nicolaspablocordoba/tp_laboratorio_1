
#ifndef FUNCIONES_CALCULADORA_H_
#define FUNCIONES_CALCULADORA_H_

/** \brief funcion que muestra el menú de opcines y regresa la opcion seleccionada
 *
 * \return int opcion seleccionada
 *
 */
int menu();

/** \brief funcion que pregunta por la salida del programa que retorna la opcion elegida
 *
 * \return int opcion a retornar
 *
 */
int salir_calculadora();

/** \brief guarda el operador en una direccion de memoria y retorna si fue posible o no
 *
 * \return int 1 ok / 0 error
 *
 */
int pedir_numero(int* numero);

/** \brief funcion que imprime un mensaje en caso de error
 *
 * \param mensaje_error[] char mensaje de error
 * \return void no tiene
 *
 */
void imprimir_mensaje_error(char mensaje_error[]);

/** \brief funcion que imprime los numeros sobre los que se realizan los calculos
 *
 * \param primer_numero int primer_numero a mostrar
 * \param segundo_numero int segundo_numero a mostrar
 * \return void
 *
 */
void imprimir_numeros(int primer_numero, int segundo_numero);

/** \brief funcion que hace todos los calculos
  *
  * \param primer_num int
  * \param segundo_num int
  * \param suma int* puntero al resultado de la suma
  * \param resta int* puntero al resultado de la resta
  * \param multiplicacion int* puntero al resultado de la multiplicacion
  * \param division float* puntero al resultado de la division
  * \param *primer_factorial long longint puntero al resultado del primer factorial
  * \param *segundo_factorial long longint puntero al resultado del segundo factorial
  * \return int 1 ok / 0 error
  *
  */
 int hacer_calculos(int primer_num, int segundo_num, int *suma, int *resta, int *multiplicacion, float *division, int *primer_factorial, int *segundo_factorial);

 /** \brief  que recibe dos numeros, los suma y luego retorna el resultado
  *
  * \param primer_num int primer numero
  * \param segundo_num int segundo numero
  * \return int resultado
  *
  */
 int sumar_numeros(int primer_num, int segundo_num);

 /** \brief recibe dos numeros, los resta y luego retorna el resultado
  *
  * \param primer_num int primer numero
  * \param segundo_num int segundo numero
  * \return int resultado
  *
  */
 int restar_numeros(int primer_num, int segundo_num);

 /** \brief recibe dos numeros, los multiplica y luego retorna el resultado
  *
  * \param primer_num int primer numero
  * \param segundo_num int segundo numero
  * \return int resultado
  *
  */
 int multiplicar_numeros(int primer_num, int segundo_num);

 /** \brief recibe dos numeros, los divide y luego retorna el resultado
  *
  * \param primer_num int primer numeros
  * \param segundo_num int segundo numero
  * \return float resultado
  *
  */
 float dividir_numeros(int primer_num, int segundo_num);

 /** \briefcalcula el factorial de un numero
  *
  * \param numero int numero a factorear
  * \return int
  *
  */
 int factorial_numeros(int numero);

 /** \brief informa los resultados de los calculos hechos
  *
  * \param primer_num int primer numero ingresado
  * \param segundo_num int segundo numero ingresado
  * \param suma int* puntero al resultado de la suma
  * \param resta int* puntero al resultado de la resta
  * \param multiplicacion int* puntero al resultado de la multiplicacion
  * \param division float* puntero al resultado de la division
  * \param *primer_factorial int puntero al resultado del primer factorial
  * \param *segundo_factorial int puntero al resultado del segundo factorial
  * \return void no retorna
  *
  */
 void resultados(int primer_num, int segundo_num, int *suma, int *resta, int *multiplicacion, float *division, int *primer_factorial, int *segundo_factorial);


#endif /* FUNCIONES_CALCULADORA_H_ */
