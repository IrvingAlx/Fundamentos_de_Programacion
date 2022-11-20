/*
 * @file TablasDeMultiplicar10.c
 * @brief Imprime las tablasdd e multiplicar del 1 al 10.
 * @details Programa que muestra las tablas de multiplicar del 1 al 10.
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

void tablasDeMultipliacr(void);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  system("color F0");

  mostrarInstrucciones("Irving Alejandro",
                       "Programa que muestra las primeras \n\t\t 10 tablas de "
                       "multiplicar del a al 10");
  limpiarEntradaDatos();

  system("clear");

  printf("\n\n\tLas tablas de multiplicar son:\n\t");

  tablasDeMultipliacr();

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
 *@fn Funcion que evalua si un numero es positivo, negativo o cero
 *@param x numero real.
 */

void tablasDeMultipliacr(void) {
  int r = 0;

  for (int j = 1; j < 11; j++) {
    for (int i = 1; i <= 10; i++) {
      r = j * i;
      printf("\n   %d * %d = %d", j, i, r);
    }
    printf("\n\tPresiona la tecla \"enter\" para continuar.");
    getchar();
  }
  return;
}
