/*
 * @file PositivoNegativoCero.c
 * @brief Acepta un numero y muestra si es negativo, positivo o cero.
 * @details Programa que evalua el valor de los numeros y muestra si es negativo, positivo o cero.
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

void positivoNegativoCero(int);


/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando correctamente
*/

int main(void){
  
  	system("color F0");
  
   	int x;
    
 	mostrarInstrucciones("Irving Alejandro", "Programa que muestra si un numero entero es \n\t\t positivo, negativo o igual a cero");
  	limpiarEntradaDatos();
   
  
  	printf("\n\n\tIngrese el numero que quiere evaluar:\n\t");
 	scanf("%d",&x); 
    system("clear");
    
	positivoNegativoCero(x);
  
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
 *@fn Funcion que evalua si un numero es positivo, negativo o cero
 *@param x numero real.
 */

  void positivoNegativoCero(int x)
{
  	if (x > 0)  {
		
		printf("\n\n\tEl numero ingresado es positivo\n\t");
 	 	
  	} 
	if (x == 0) {
		
		printf("\n\n\tEl numero ingresado es cero\n\t");
		 	
  	} 	
	if (x < 0)  {
  		
		  printf("\n\n\tEl numero ingresado es negativo\n\t");	

	}   
    return;    
  }
  

