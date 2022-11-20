/*
 * @file ConversorRomanosr.c
 * @brief convierte un numero de decimal a romano
 * @details Convierte un numero de decimal a romano con arreglos.
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
void conversorDeNumeros(int);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {

  system("color F0");

  int numero;
  mostrarInstrucciones(
      "Irving Alejandro Vega Lagunas \t\t 216969-0 \n\t\t Emilio Roman Sanchez "
      "\t\t\t 218350-4",
      "Programa que convierte numeros decimales  \n\t\ta romanos");
  limpiarEntradaDatos();

  printf("Ingresa tu numero decimal: ");
  scanf("%d", &numero);

  if (numero < 0) {
    printf("Escribiste un numero entero\n");
  } else if (numero == 0) {
    printf("Escribiste 0\n");
  } else if (numero >= 4000) {
    printf("Solo se hacepta de 1 a 4000.\n");
  } else {
    conversorDeNumeros(numero);
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
 *@fn Funcion que convierte numeros decimales a romanos
 *@param x numero real.
 */

void conversorDeNumeros(int numero) {

  char romano[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
  int decimal[] = {1, 5, 10, 50, 100, 500, 1000};
  int inicio;
  int final;
  int restante;

  while (numero > 0) {
    for (inicio = 6; inicio > 0; inicio--) {
      if (numero >= decimal[inicio]) {
        break;
      }
    }
    for (final = 0; final < 7; final++) {
      if (numero <= decimal[final]) {
        break;
      }
    }
    restante = numero; // encontrar numeros restantes de la izqueirda(los
                       // numeoros romanos van de izquierda a derecha)
    while (restante != 0) {
      restante /= 10;
      if (restante < 10) {
        break;
      }
    }
    if (numero < 10 && numero == 4) { // imrimir  numero romano
      printf("%c%c", romano[inicio], romano[final]);
      numero = 0;
    } else if (numero > 10 && restante == 4) {
      printf("%c%c", romano[inicio], romano[final]);
      numero -= (decimal[final] - decimal[inicio]);
    } else if (numero < 10 && numero == 9) {
      printf("%c%c", romano[inicio - 1], romano[final]);
      numero = 0;
    } else if (numero > 10 && restante == 9) {
      printf("%c%c", romano[inicio - 1], romano[final]);
      numero -= (decimal[final] - decimal[inicio - 1]);
    } else {
      printf("%c", romano[inicio]);
      numero -= decimal[inicio];
    }
  }
  return;
}
