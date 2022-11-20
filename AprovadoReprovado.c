/*
 * @file AprobadoReprobado.c
 * @brief Imprime las materias reprobadas.
 * @details Programa que muestra las materias reprobadas de 3 alumnos.
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

void calificacionAprobadas(void);


/**
 * @fn Funcion del programa principal
 * @return Entero: Si muestra un valor 0 nuestro programa se esta ejecutando correctamente
*/

int main(void){
  
 
  	system("color F0");
  
    
 	mostrarInstrucciones("Irving Alejandro", "Programa que muestra las materias \n\t\t reprobadas de 3 alumnos");
  	limpiarEntradaDatos();

    system("clear");
 		printf("\n\n\tElija que numero desea ver\n\t");

		calificacionAprobadas();
  
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
 *@fn Funcion calcular materias aprobadas
 *@param x numero real.
 */

  void calificacionAprobadas(void)
{
	int j, i;
	int calif[4];
	int aprobadas[3] = {0}; 
	int reprobadas[3] = {0};	
	
	  	for(j=0; j<3; j++){
        	printf("\n\n\tAlumno %d ingrese sus 5 calificaciones\n\t", j+1);
			for(i=0; i<5 ;i++){
				printf("\n\tIngrese su calificacion; %d\n\t", i+1);
    	    	scanf(" %d",&calif[i]); 
				limpiarEntradaDatos();	
					if (calif[i] >= 5){
						//printf("\n\t aprobado %d\n\t", j);	
						aprobadas[j] = aprobadas[j] + 1;
						//printf("\n\t aprobado j %d\n\t", aprobadas[j]);
 	 	  			}else {
						//printf("\n\t reprobado%d\n\t", j);
						reprobadas[j] = reprobadas[j] +1;
						//printf("\n\t reprobado j %d\n\t", reprobadas[j]);
			  		} 
			}
		}
	printf("\n\n\tAlumno 1 usted tiene %d materias aprobadas y %d materias reprobadas\n\t", aprobadas[0], reprobadas[0]);
	printf("\n\n\tAlumno 2 usted tiene %d materias aprobadas y %d materias reprobadas\n\t", aprobadas[1], reprobadas[1]);
	printf("\n\n\tAlumno 3 usted tiene %d materias aprobadas y %d materias reprobadas\n\t", aprobadas[2], reprobadas[2]);
    return;    
  }
