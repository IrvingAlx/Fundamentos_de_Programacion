/*
 * @file CelciusToFaherenheit.c
 * @brief Calcula cuanto vale una temperatura en ptro sistema de medicion
 * @details Programa las cantidades de grados convertidas en otra unidad.
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
float celsiusFaherenheit(float);
float faherenheitCelsius(float);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  system("color F0");

  int x;
  float faren, centi, Centi, Faren;

  mostrarInstrucciones(
      "Irving Alejandro",
      "Programa que muestra la duma de los numeros pares \n\t\t y la cantidad "
      "de impares que tiene el numero ingresado");

  printf("\n\n\tQue decea convertir: \n\n\t\t(1) Celsius a Faherenheit "
         "\n\t\t(2) Faherenheit a Celsius\n\t");
  scanf("%d", &x);
  system("clear");

  if (x == 1) {

    printf("\n\n\tIngrese los grados Celsius que desea convertir en "
           "Faherenheit\n\t");
    scanf("%f", &centi);
    Centi = celsiusFaherenheit(centi);
    printf("\n\n\tSus grados Celsius en Faherenheit son: %f\n", Centi);

  } else {

    printf("\n\n\tIngrese los grados Celsius que desea convertir en "
           "Faherenheit\n\t");
    scanf("%f", &faren);
    Faren = faherenheitCelsius(faren);
    printf("\n\n\tSus grados Faherenheit en Celsius son: %f\n", Faren);
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
 *@fn Funcion que convierte celcius a faherenheit
 *@param x numero real.
 */

float celsiusFaherenheit(float centi) {
  float centiR;

  centiR = (centi * 1.8) + 32;

  return centiR;
}

/**
 *@fn Funcion que convierte celcius a faherenheit
 *@param x numero real.
 */

float faherenheitCelsius(float faren) {
  float farenR;

  farenR = (faren - 32) / 1.8;

  return farenR;
}