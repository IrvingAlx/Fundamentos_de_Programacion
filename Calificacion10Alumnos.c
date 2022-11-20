/*
 * @file Calificacion10Alumnos.c
 * @brief Imprime las materias reprobadas.
 * @details Programa que muestra el promedio de un alumno.
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

void calificacionPromedio(void);

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando
 * correctamente
 */

int main(void) {
  system("color F0");

  mostrarInstrucciones("Irving Alejandro",
                       "Programa que muestra el promedio  de 10 materias");
  limpiarEntradaDatos();

  system("clear");
  // printf("\n\n\tElija que numero desea ver\n\t");

  calificacionPromedio();

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
 *@fn Funcion calcular materias aprobadas
 *@param x numero real.
 */

void calificacionPromedio(void) {
  float calif[11];
  float resultado = 0;
  float promedio;
  printf("\n\n\tAlumno ingrese sus 10 calificaciones\n\t");
  for (int i = 0; i < 10; i++) { // Pide las calificaciones a los alumnos
    printf("\n\tIngrese su calificacion; %d\n\t", i + 1);
    scanf("%f", &calif[i]);
    resultado = resultado + calif[i];
  }
  promedio = resultado / 10;
  printf("\n\n\tAlumno 1 usted tiene tiene un promedio de %f \n\t", promedio);
  return;
}
