/*
 * @file  NumeroPerfecto.c
 * @brief Calcula los numeros perfectos
 * @details Muestra los numeros perfectos que se encuentran entre N cantidad de
 * numerps.
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
void numeroPerfecto(int);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  system("color F0");

  int x;

  mostrarInstrucciones("Irving Alejandro",
                       "Programa que imprime los numeros perfectos \n\t\t "
                       "entre 1 y el numero dado por el usaurio");
  limpiarEntradaDatos();

  system("clear");

  printf("\n\n\tIngrese hasta que numero desea evaluar\n\t");
  scanf("%d", &x);

  numeroPerfecto(x);

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

void numeroPerfecto(int x) {
  int j, i, resto, perfecto = 0;
  int arreglo[100];

  for (int z = 0; z <= x; z++) {
    int y = 0;
    printf("\n\n\tLos divisores de %d son: ", z);
    for (i = 1; i <= z; i = i + 1) {
      resto = z % i;
      j = j + 1;
      if (resto == 0) {
        y = y + i;
        printf(" %d", i);
      }
    }
    printf("valor de y %d", y);
    if (y - z == z) {
      printf("\n\tEs numero perfecto");
      arreglo[perfecto] = y - z;
      perfecto = perfecto + 1;
    } else {
      printf("\n\tNo es numero perfecto");
    }
  }
  printf("\n\tLos numeros perfectos de 0 a %d son:", x);
  for (int g = 0; g < perfecto; g++) {
    printf("\n\tExisten %d numeros perfectos:", perfecto);
    printf("%d", arreglo[g]);
  }
  return;
}
