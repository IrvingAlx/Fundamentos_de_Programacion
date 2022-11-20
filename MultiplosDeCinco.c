/*
 * @file MultiplosDeCinco.c
 * @brief Imprime los multiplpos de 5 que estan entre el 0 y 100.
 * @details Programa que muestra los multiplos de 5 del 0 dal 100.
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
void mostrarInstrucciones(char [], char []);
void limpiarEntradaDatos(void);

void multiplosCinco(void);


/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando correctamente
*/

int main(void){
  
  	system("color F0");
  
    
 	mostrarInstrucciones("Irving Alejandro", "Programa que imprime los multiplos de 5 \n\t\t entre el 0 y 100");
  	limpiarEntradaDatos();

    system("clear");
 
   	printf("\n\n\tLos multiplos de 5 que se encuentran entre el 0 y 100 son:\n\t");

	      
	multiplosCinco();
  
  return 0;
}

/**
 *@fn Procedimientos Muestra las instrucciones del programa.
 */

  void mostrarInstrucciones(char autores[],char instrucciones[])
  {
    
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

void limpiarEntradaDatos(void)
  {
    int limpiar;
	
	while((limpiar = getchar()) != '\n' && limpiar != EOF) { }
	
	return;
  }
  
  /**
 *@fn Funcion que evalua imprime los multiplos de 5
 *@param x numero real.
 */

  void multiplosCinco(void)
{
  	int m = 0;
  	int i = 0;
  	
  	while(m < 100)
	{
    	m = 5 * i;
    	i = i + 1;
    	printf("\n %d", m);
	}
	  
    return;    
  }
  

