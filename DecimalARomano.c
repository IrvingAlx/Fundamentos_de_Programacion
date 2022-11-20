/*
 * @file NumerosRomanos.c
 * @brief Convertir a numeracion romana
 * @details Programa que convierte numero decimal a romano.
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
void numeroRomano(int);
 


/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando correctamente
*/

int main(void){
  
   mostrarInstrucciones("Irving Alejandro", "Programa que convierte un numero Decimal a Romano");
   limpiarEntradaDatos();
  
  
  int x;
  printf("Ingrese un numero del 999 a 0 para convertirlo a Romano\n");
  scanf("%d",&x);
  

    numeroRomano(x);
    
    printf("\n Gracias por usar mi programa :b \n");

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
 *@fn Funcion que convierte numero decimal a romano
 *@param x numero real.
 */

  void numeroRomano(int x)
{


  if (x>=900){
  	printf("CM");    
  	x=x-900;
  }
  if (x>=500){
  	printf("D");     
 	x=x-500;
  }
  if (x>=400){
  	printf("CD");    
  	x=x-400;
  }
  if (x>=300){
  	printf("C");     
  	x=x-100;
  }
  if (x>=200){
  	printf("C");     
  	x=x-100;
  }
  if (x>=100){
  	printf("C");     
  	x=x-100;
  }
  if (x>=90){
  	printf("XC");    
  	x=x-90; 
  }
  if (x>=50){
  	printf("L");     
  	x=x-50; 
  }
  if (x>=40){
  	printf("XL");    
  	x=x-40; 
  }
  if (x>=30){
  	printf("X");     
  	x=x-10; 
  }
  if (x>=20){
	printf("X");     
  	x=x-10; 
  }
  if (x>=10){
	printf("X");     
  	x=x-10; 
  }
  if (x>=9){
  	printf("IX");    
  	x=x-9;  
  }  
  if (x>=5){
  	printf("V");     
  	x=x-5;  
  }
  if (x>=4){
  	printf("IV");    
  	x=x-4;  
  }
  if (x>=3){
  	printf("III");   
  	x=x-3;  
  }
  if (x>=2){
  	printf("II");    
  	x=x-2;  
  }
  if (x>=1){
  	printf("I");    
   x=x-1;  
  }

    return;    
  }
