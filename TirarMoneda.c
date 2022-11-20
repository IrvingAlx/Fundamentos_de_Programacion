/*
 * @file  TirarMoneda.c
 * @brief Evalua si una moneda se tira da cara o cruz
 * @details Muestra la cantidad de veces que una moneda lsale o cruz N cantidad
 * de veces que se lanza.
 *
 * @author
 *  Irving Alejandro
 * @date Fecha de creacion
 *  21 de Noviembre de 2020
 *
 * @author Desarrollador que realizo la ultima modificacion
 *  Irving Alejandro
 * @date Fecha de ultima modificacion
 *  21 de Noviembre de 2020
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
   @brief Prototipos de funcion*/
void mostrarInstrucciones(char[], char[]);
void limpiarEntradaDatos(void);
void lanzarMoneda(int);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {
  srand(time(NULL));

  system("color F0");

  int x;

  mostrarInstrucciones("Irving Alejandro Vega Lagunas \t\t 216969-0 \n\t\t "
                       "Emilio Roman Sanchez \t\t\t 218350-4",
                       " Muestra la cantidad de veces que una moneda lsale o "
                       "cruz N cantidad de veces que se lanza");
  limpiarEntradaDatos();

  system("clear");

  printf("\n\n\tCuantas veces quiere lanzar la moneda\n\t");
  scanf("%d", &x);
  lanzarMoneda(x);

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
 *@fn Funcion que simula el lanzamiento de una moneda
 *@param x numero real.
 */

void lanzarMoneda(int x) {
  int cara = 0, cruz = 0;
  int random, i, inicio = 0, final = 100;

  for (i = 1; i <= x; i++) {
    random = inicio + rand() % final;
    if (random >= 50) {
      cara = cara + 1;
    }
    if (random <= 50) {
      cruz = cruz + 1;
    }
  }
  printf("\n\tSalio cruz %d veces\n\t", cruz);
  printf("\n\tSalio cara %d veces\n\t", cara);

  return;
}
