/* Laboratorio4
Author: Daniel Iram Gonzalez Portilla
date: 09-03-2023
Description: El programa es una calculadora con las operaciones de suma, resta multiplicacion y division implementando while y switch así como el uso de funciones
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void suma (int a, int b);
void resta (int a, int b);
void division(int a, int b);
void multiplicacion(int a, int b);

int printMenu(){
    /* printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    */
    int option;
    system("cls");
    fflush( stdin );
    printf("Bienvenido al men%c seleccione una opci%cn \n\n",163,162);
    printf("\t1)Suma\n"); printf("\t2)Resta\n"); printf("\t3)Division\n"); printf("\t4)Multiplicacion\n");printf("\t5)Salir\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int main(){
    char inutil;
    int a,b;
    int flag = 0;
    while(flag!=5){
        flag = printMenu();
        switch (flag){
            case 1:
                printf("\n Ingrese un numero");
                scanf("%d",&a);
                printf("\n Ingrese un numero");
                scanf("%d",&b);
                suma(a,b);
                break;
            
            case 2:
                printf("\n Ingrese un numero");
                scanf("%d",&a);
                printf("\n Ingrese un numero");
                scanf("%d",&b);
                resta(a,b);
                break;
            
            case 3:
                printf("\n Ingrese un numero");
                scanf("%d",&a);
                printf("\n Ingrese un numero");
                scanf("%d",&b);
                division(a,b);
                break;
                
            case 4:
                printf("\n Ingrese un numero");
                scanf("%d",&a);
                printf("\n Ingrese un numero");
                scanf("%d",&b);
                multiplicacion(a,b);
                break;
                
               case 5:
                printf("\n Vuelva printo");
                break;
				 
            case 0:
                printf("\nNo valido");
                break;
            default:
                printf("\nNo valido");
                break;
        }
        printf("\nOprima enter o cualquier tecla cualquiera para continuar, si desea salir, oprima 5 \n");
        fflush( stdin );
        scanf("%c",&inutil);
        if(inutil==53)
        	flag=5;
        else
        	flag=0;
    }
    printf("excelente");
}
void suma (int a, int b)
{
	/* suma
	 Author: Daniel Iram Gonzalez Portilla
	 Date: 09/03/2023
	 Description: funcion "suma" que imprime la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
	 [Param: [a] [int] [b] [int] ]
	*/
	if ((a%2==0)&&(b%2==0))
	{
		int tot;
		tot=a+b;
		printf("\nLa suma de %i con %i es: %i",a,b,tot); 
	}else
		printf("\nNo son pares");
}
void resta (int a, int b)
{
	/* resta
	 Author: Daniel Iram Gonzalez Portilla
	 Date: 09/03/2023
	 Description: funcion "resta" que imprime la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
	 [Param: [a] [int] [b] [int] ]
	*/
	if((a%5==0)&&(b%5==0))
	{
		int tot;
		tot=a-b;
		printf("\nLa resta de %i con %i es: %i",a,b,tot); 
	}else
		printf("\nNo son impares multiplos de 5");
}
void division(int a, int b)
{
	/* division
	 Author: Daniel Iram Gonzalez Portilla
	 Date: 09/03/2023
	 Description: funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
	 [Param: [a] [int] [b] [int] ]
	*/
	int tot;
	tot=a/b;
	if(a%b==0)
	{
		printf("\nEl residuo de %d entre %d es: %d",a,b,tot); 	
	}else
		printf("\nNo es una division exacta");
	
}
void multiplicacion(int a, int b)
{
	if((a>10)&&(b>10))
	{
		/* division
		 Author: Daniel Iram Gonzalez Portilla
		 Date: 09/03/2023
		 Description: funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
		 [Param: [a] [int] [b] [int] ]
		*/
		int tot;
		tot=a*b;
		printf("\nEl producto de %d por %d es: %d",a,b,tot); 
	}else
		printf("\nNo son numeros mayores a 10");
	
}


//---------------------INSTRUCCIONES-----------------------
//explique: 
//      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
//		R.- Imprime el menú solamente, de igual forma, para limpiar la pantalla en c, es con system("cls");
//      2. ¿Para qué sirve la función fflush?
//		R.- Limpia la memoria caché
//      3. ¿Cuál es la sintaxis de un while?
//		R.- while (n=0)
//		{
//			/*Código aquí*/
//		}
//      4. ¿Cuál es la sintaxis de un switch?
//		switch(n)
//		{
//		case 1:
//			/*Código aquí*/
//		break;
//		case 2:
//			/*Código aquí*/
//		break;
//		default
//			/*Código aquí*/
//		break;
//		}
//Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
//Guarde y suba su código a un repositorio.
