/*
 * @file  Triangulo.c
 * @brief Imprime un triangulo
 * @details Impirime un triangulo dado la base.
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
void triangulo(int);

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
                       "Programa que imprime un trinagulo");
  limpiarEntradaDatos();

  system("clear");

  printf("\n\n\tIngrese la base de su triangulo\n\t");
  scanf("%d", &x);
  triangulo(x);

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

void triangulo(int x) {
  int a = 1, e = x - 1;

  for (int j = 1; j <= x; j++) {
    for (int i = 1; i <= e; i++)
      printf(" ");
    for (int i = 1; i <= a; i++)
      printf("*");
    printf("\n");
    a = a + 2;
    e = e - 1;
  }
  return;
}
