/*
 * @file InversorDeCadenas.c
 * @brief Voltea una cadena
 * @details Lee una cadena y la invierte.
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
#include <string.h>

/**
   @brief Prototipos de funcion*/
void mostrarInstrucciones(char[], char[]);
void limpiarEntradaDatos(void);
char *voltearCadena(char[]);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  system("color F0");

  char usuario[81];

  mostrarInstrucciones(
      "Irving Alejandro Vega Lagunas \t\t 216969-0 \n\t\t Emilio Roman Sanchez "
      "\t\t\t 218350-4",
      "Programa que invierte una cadena \n\t\t de un maximo de 80 caracteres");
  limpiarEntradaDatos();

  system("clear");

  printf("\n\n\tIngrese su palabra cadena menore a 80 caracteres sin "
         "espacios\n\t");
  scanf("%s", usuario);
  printf("La cadena invertida es: %s ", voltearCadena(usuario));

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
 *@fn Funcion que convierte celcius a faherenheit
 *@param x numero real.
 */

char *voltearCadena(char usuario[]) {

  int longitud = strlen(usuario);
  char temporal;

  for (int i = 0, j = longitud - 1; i < (longitud / 2); i++, j--) {
    temporal = usuario[i];
    usuario[i] = usuario[j];
    usuario[j] = temporal;
  }
  return usuario;
}
