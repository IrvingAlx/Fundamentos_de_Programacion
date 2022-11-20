/*
 * @file CodificadorDecodificador.c
 * @brief Codificar una palabra de 5 letras
 * @details Codificador y decodificador de una palabra de 50 letras restando 30
 * a su valor en ascci.
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

/**
   @brief Prototipos de funcion*/
void mostrarInstrucciones(char[], char[]);
void limpiarEntradaDatos(void);
void codificador(void);
void decodificador(void);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  system("color F0");

  int x;

  mostrarInstrucciones("Irving Alejandro Vega Lagunas \t\t 216969-0 \n\t\t "
                       "Emilio Roman Sanchez \t\t\t 218350-4",
                       "Programa que codifica una parabra de 5 letras \n\t\t y "
                       "la decodifica si el usuario lo elije");
  limpiarEntradaDatos();

  system("clear");

  if (x == 1) {
    codificador();
  } else {
    decodificador();
  }

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

void codificador(void) {
  char usuario[6];

  printf("\n\n\tIngrese su palabra de 5 letras\n\t");
  scanf("%s", usuario);

  for (int i = 0; i < 5; i++) {
    usuario[i] = usuario[i] - 30;
  }
  printf("\n\n\tSupalabra codificada es: \n\t");
  printf(" %s\n", usuario);

  return;
}

/**
 *@fn Funcion que convierte celcius a faherenheit
 *@param x numero real.
 */

void decodificador(void) {
  char usuario[6];

  printf("\n\n\tIngrese su palabra de 5 letras\n\t");
  scanf("%s", usuario);

  for (int i = 0; i < 5; i++) {
    usuario[i] = usuario[i] + 30;
  }
  printf("\n\n\tSupalabra codificada es: \n\t");
  printf(" %s\n", usuario);

  return;
}
