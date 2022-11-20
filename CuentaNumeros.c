/*
 * @file CuentaNumeros.c
 * @brief Cuenta los numeros individuales de un numero
 * @details Programa muestra los valores individuales de un numero.
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
void cuentaNumeros(int, float);
 
  

/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando correctamente
*/

int main(void){
  
  float f; 
  long int ent;
  
   mostrarInstrucciones("Irving Alejandro", "Programa que muestra la duma de los numeros pares y la cantidad de impares que tiene el numero ingresado");
   
  
  printf("Ingrese un numero entero y positivo que se encuentre entre el 0 y 99999888: ");
  scanf("%f",&f); 
   
  ent = f;

cuentaNumeros(ent, f);
  
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

    system("clear");

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
 *@fn Funcion cuenta los numeros de un numero
 *@param x numero real.
 */

  void cuentaNumeros(int ent, float f)
{
	
	long int x;
 	int y;
 	int par;
  	int impar;
  	int suma = 0;
  	int numeros=0;
  
if(f - ent > 0 || f < 0 ) {
     printf("\n Elija un numero entero y positivo >:c \n");
    }

  else {
  	
        x = f;
      	while (x>0)
	{
  		y=x%10;
  		numeros = numeros + x%10;
  		x=x/10;
  		
		if (y % 2 == 0) {
			par = par + 1;	
			suma = suma + y;
			
  		} else {
  			impar = impar + 1;

  		}  
		  
		printf("%i\t",y);
  		
 			
  	}
 
  	printf("\n La suma de todos sus numeros es %i \n",numeros);  	
  	
  	printf("\n Usted tiene %i numeros impares \n",impar);
  	
	printf("\n La suma de los digitos pares de tu numero es: %i \n",suma);
        
	printf("\n Gracias por usar mi programa :b \n");
  }
    return;    
  }
