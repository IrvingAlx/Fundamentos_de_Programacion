/*
 * @file SelectorDeNumeros.c
 * @brief Imprime el texto del numero elegido.
 * @details Programa que muestra el valor escrito de un numero del 1 al 5.
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

void selectorNumero(int);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  int x;
  system("color F0");

  mostrarInstrucciones(
      "Irving Alejandro",
      "Programa que muestra el texto \n\t\t de los numeros entre el 1 y 5");
  limpiarEntradaDatos();

  system("clear");

  printf("\n\n\tElija que numero desea ver\n\t");
  scanf("%d", &x);
  system("clear");

  selectorNumero(x);

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

void selectorNumero(int x) {

  switch (x) {
  case 1:
    printf("\n\n\tUno\n\t");
    break;
  case 2:
    printf("\n\n\tDos\n\t");
    break;
  case 3:
    printf("\n\n\tTres\n\t");
    break;
  case 4:
    printf("\n\n\tCuatro\n\t");
    break;
  case 5:
    printf("\n\n\tCinco\n\t");
    break;
  default:
    printf("Ingrense un numero del 1 al 5");
  }

  return;
}
