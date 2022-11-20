/*
 * @file CalculadoraBasica.c
 * @brief Realisa operaciones basicas con numeros dados por el usuario.
 * @details Programa muestra los valores de las operaciones basicas.
 *
 * @author
 *  Irving Alejandro
 * @date Fecha de creacion
 *  01 de Noviembre de 2020
 *
 * @author Desarrollador que realizo la ultima modificacion
 *  Irving Alejandro
 * @date Fecha de ultima modificacion
 *  01 de Noviembre de 2020
 */

#include <stdio.h>
#include <stdlib.h>

/**
   @brief Prototipos de funcion*/
void mostrarInstrucciones(char[], char[]);
void limpiarEntradaDatos(void);
int suma(int, int);
int resta(int, int);
int multiplicacion(int, int);
float division(int, int);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  system("color F0");

  int num1, num2, Suma, Resta, Multi;
  float Divi;

  mostrarInstrucciones("Irving Alejandro",
                       "Programa que muestra realiza operaciones basicas como "
                       "\n\t\t suma, resta, divicion y multiplicacion");

  printf("\n\n\tIngresa los dos numeros con los que deceas realizar las "
         "operaciones\n\t");
  scanf("%d %d", &num1, &num2);
  system("clear");

  Suma = suma(num1, num2);
  Resta = resta(num1, num2);
  Multi = multiplicacion(num1, num2);
  Divi = division(num1, num2);

  printf("\n\n\tEl resultado de su suma es: %d\n", Suma);
  printf("\n\n\tEl resultado de su resta es: %d\n", Resta);
  printf("\n\n\tEl resultado de su multiplicacion es: %d\n", Multi);
  printf("\n\n\tEl resultado de su division es: %f\n", Divi);
  return 0;
}

/**
 *@fn Procedimientos Muestra las instrucciones del programa.
 */

void mostrarInstrucciones(char autores[], char instrucciones[]) {

  system("clear");

  printf("\n\n\n\n\tAplicacion desarrollada por:\n");
  printf("\t\t%s\n\n", autores);
  printf("\tDescripcion del programa:\n");
  printf("\t\t%s\n\n", instrucciones);
  printf("\tPresiona la tecla \"enter\" para continuar.");

  getchar();

  system("clear");

  return;
}

/**
 *@fn Procedimiento para limpiar el buffer de entrada
 */

void limpiarEntradaDatos(void) {
  int limpiar;

  while ((limpiar = getchar()) != '\n' && limpiar != EOF) {
  }

  return;
}

/**
 *@fn Funcion calcula la suma de dos numeros enteros
 *@param num1 y num2.
 */

int suma(int num1, int num2) {
  int sumaR;

  sumaR = num1 + num2;

  return sumaR;
}

/**
 *@fn Funcion calcula la resta de dos numeros enteros
 *@param num1 y num2.
 */

int resta(int num1, int num2) {
  int restaR;

  restaR = num1 - num2;

  return restaR;
}

/**
 *@fn Funcion calcula la multiplicacion de dos numeros enteros
 *@param num1 y num2.
 */

int multiplicacion(int num1, int num2) {
  int multiplicacionR;

  multiplicacionR = num1 * num2;

  return multiplicacionR;
}

/**
 *@fn Funcion calcula la division de dos numeros enteros
 *@param num1 y num2.
 */

float division(int num1, int num2) {
  float divisionR;

  divisionR = num1 / num2;

  return divisionR;
}
