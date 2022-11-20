/*
 * @file PaisesCapitales.c
 * @brief Muestra la capital o pais 
 * @details Muestra la capital del pais ingresado y viceversa.
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
#include <string.h>

#define CANADA "Canada"
#define INGLATERRA "Inglaterra"
#define FRANCIA "Francia"
#define ALEMANIA "Alemania"
#define INDIA "India"
#define ISRAEL "Israle"
#define ITALIA "Italia"
#define JAPON "Japon"
#define MEXICO "Mexico"
#define CHINA "China"
#define RUSIA "Rusia"
#define ESTADOSUNIDOS "Estados"

#define OTTAWA "Ottawa"
#define LONDRES "Londres"
#define PARIS "Paris"
#define BONN "Bonn"
#define NUEVADELI "Nueva"
#define JERUSALEN "Jesuralen"
#define ROMA "Roma"
#define TOKIO "Tokio"
#define CIUDADDEMEXICO "Ciudad"
#define PEKIN "Pekin"
#define MOSCU "Moscu"
#define WASHINGTON "Washington"

#define PAIS "Pais"
#define CAPITAL "Capital"
#define FIN "Fin"
#define LONGITUD 80

/**
   @brief Prototipos de funcion*/
void mostrarInstrucciones(char [], char []);
void limpiarEntradaDatos(void);
void pais(int);
void capital(int);
 


/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando correctamente
*/

int main(void){
  
  	system("color F0");
  

    char x [LONGITUD + 1];
  	int y = 0;
  	
 	mostrarInstrucciones("Irving Alejandro Vega Lagunas \t\t 216969-0 \n\t\t Emilio Roman Sanchez \t\t\t 218350-4", "Muestra la capital del pais ingresado y viceversa");
  	limpiarEntradaDatos();
 
do
{   
  
    printf("\n\n\tEscriba que desea hacer \n\n\t\t Pais \n\n\t\t Capital \n\n\t\t Fin \n\t");
 	scanf("%s",&x); 
    
	system("clear");
        
    if(strcmp(x, PAIS) == 0) {
		pais(y);
  		y=1;
			
  	} 
    if(strcmp(x, CAPITAL) == 0) {
  		capital(y);
  		y=1;
  		
  	} 
    if(strcmp(x, FIN) == 0) {
  		y=0;
  	} 
 
 }

while(y != 0);	

    printf("\n\n\t\t\t\tGracias por usar el Programa");


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
	
	while((limpiar = getchar()) != '\n' && limpiar != EOF) { 
	}
	
	return;
  }
  
  /**
 *@fn Funcion que evalua y muestra la capital de un pais ingresado
 *@param x numero real.
 */

  void pais(int y)
{
    	char usuario [LONGITUD + 1];
	 
 	printf("\n\n\tIngrese el pais para saber la capital\n\t");
	scanf("%s",usuario); 
		
		if(strcmp(usuario, INGLATERRA) == 0) {
			printf("\n\t\tCapital de %s es Londres.",usuario);
		}
		if(strcmp(usuario, CANADA) == 0) {
			printf("\n\t\tCapital de %s es Ottawa.",usuario);
		} 
		if(strcmp(usuario, FRANCIA) == 0) {
			printf("\n\t\tCapital de %s es Paris.",usuario);
		}
		if(strcmp(usuario, ALEMANIA) == 0) {
			printf("\n\t\tCapital de %s es Bonn.",usuario);
		}
		if(strcmp(usuario, INDIA) == 0) {
			printf("\n\t\tCapital de %s es Nueva Deli.",usuario);
		}
		if(strcmp(usuario, ISRAEL) == 0) {
			printf("\n\t\tCapital de %s es Jerusalen.",usuario);
		}
		if(strcmp(usuario, ITALIA) == 0) {
			printf("\n\t\tCapital de %s es Roma.",usuario);
		}
		if(strcmp(usuario, JAPON) == 0) {
			printf("\n\t\tCapital de %s es Tokio.",usuario);
		}
		if(strcmp(usuario, MEXICO) == 0) {
			printf("\n\t\tCapital de %s es Ciudad de Mexico.",usuario);
		}
		if(strcmp(usuario, CHINA) == 0) {
			printf("\n\t\tCapital de %s es Pekin.",usuario);
		}
		if(strcmp(usuario, RUSIA) == 0) {
			printf("\n\t\tCapital de %s es Moscu.",usuario);
		}
		if(strcmp(usuario, ESTADOSUNIDOS) == 0) {
			printf("\n\t\tCapital de %s Unidos es Washington.",usuario);
		} 
			
    return;    
  }
  
    /**
 *@fn Funcion que evalua y muestra el pais de una capital ingresado
 *@param x numero real.
 */

  void capital(int y)
{
   		
		   char usuario [LONGITUD + 1];
	 
 	printf("\n\n\tIngrese la Capital de la cual desea saber el Pais\n\t");
	scanf("%s",usuario); 
	
		if(strcmp(usuario, OTTAWA) == 0) {
			printf("\n\t\tCapital de %s es Canada.",usuario);
		} 
		if(strcmp(usuario, LONDRES) == 0) {
			printf("\n\t\tCapital de %s es Inglaterra.",usuario);
		}
		if(strcmp(usuario, PARIS) == 0) {
			printf("\n\t\tCapital de %s es Francia.",usuario);
		}
		if(strcmp(usuario, BONN) == 0) {
			printf("\n\t\tCapital de %s es Alemania.",usuario);
		}
		if(strcmp(usuario, NUEVADELI) == 0) {
			printf("\n\t\tCapital de %s Deli es India.",usuario);
		}
		if(strcmp(usuario, JERUSALEN) == 0) {
			printf("\n\t\tCapital de %s es Israel.",usuario);
		}
		if(strcmp(usuario, ROMA) == 0) {
			printf("\n\t\tCapital de %s es Italia.",usuario);
		}
		if(strcmp(usuario, TOKIO) == 0) {
			printf("\n\t\tCapital de %s es Japon.",usuario);
		}
		if(strcmp(usuario, CIUDADDEMEXICO) == 0) {
			printf("\n\t\tCapital de %s de Mexico es Mexico.",usuario);
		}
		if(strcmp(usuario, TOKIO) == 0) {
			printf("\n\t\tCapital de %s es China.",usuario);
		}
		if(strcmp(usuario, MOSCU) == 0) {
			printf("\n\t\tCapital de %s es Rusia.",usuario);
		}
		if(strcmp(usuario, WASHINGTON) == 0) {
			printf("\n\t\tCapital de %s es Estados Unidos.",usuario);
		} 
	
		
    return;    
  }






