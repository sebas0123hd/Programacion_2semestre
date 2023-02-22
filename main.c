/**@date <22-02-2023>
@author <Daniel Iram Gonzalez Portilla>
@version <1.0>
**/
//Se declaran las librerías a usarse en el programa
#include <stdio.h>
#include <stdlib.h>
/** \fn void retardo();
 * \brief DA tiempo de espera
 * \param No tiene
 * \return No devuelve  */
 void retardo();
/** \fn int preguntasAmor (int cont,int sum);
 * \brief Daal usuario las preguntas a responder
 * \param cont de tipo entero y sum de tipo entero
 * \return regresa un entero que es la suma de la variable b con la variable sum*/
int preguntasAmor (int cont,int sum);
/** \fn void respuestaImp (float contLove);
 * \brief Da la respuesta final al programa
 * \param conLove un flotante para dar la calificación final
 * \return No devuelve  */
void respuestaImp (float contLove);
//se inicializa la funcion principal
void main ()
{
    //se declaran variables a utilizarse en el main
    int i=0,j=0;
    float amorVerdadero,  contLove=0;
    printf("Hola amoroso, Te gustaria saber si tu pareja y tu son el uno para el otro?\nAverigualo aqui!");
	printf("\nExcelente, iniciaremos el proceso para validar su compatibilidad!");
	system("PAUSE");
	retardo();
	for(i=0;i<10;i++)
	{
		printf("Cargando...\n");
		printf("==========\n");
		for(j=0;j<i;j++)
			printf("X");
		printf("\n==========\n");
		retardo();
		system("cls");
	}
    for (i=1;i<=10;i++)
    	contLove=preguntasAmor(i,contLove);
    //printf("%f",contLove);
    amorVerdadero=contLove/2.0;
    respuestaImp(amorVerdadero*10);
    printf("\nIndependientementedel resultado esperamos que tu y tu ser amado puedan tener un futuro feliz");
    
}

void retardo()
{
	int i=0,j=0;
	for(i=0;i<9090;i++)
	{
		for(j=0;j<i;j++)
		{
		}
	}
}

int preguntasAmor (int cont,int sum)
{
	int i=0,j=0;
	int a,b;
	switch (cont)
	{
		case 1:
		printf("¿Tu pareja sube fotos contigo?\n1.-si\n2.-no\n");
		scanf("%i",&a);
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 2:
		printf("¿Tu pareja aun habla con su ex?\n1.-si\n2.-no\n");
		scanf("%i",&a);
		if(a==1)
			b=1;
		else if(a==2)
			b=2;
			else 
			b=0;
		break;
		case 3:
		printf("¿Tu pareja te da los buenos días y buenas noches?\n1.-si\n2.-no\n");
		scanf("%i",&a);		
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 4:
		printf("¿Tu pareja te da obsequios sin ser una fecha especial?\n1.-si\n2.-no\n");
		scanf("%i",&a);		
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 5:
		printf("¿Tu pareja te ayuda cuando te enfermas?\n1.-si\n2.-no\n");
		scanf("%i",&a);	
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 6:
		printf("¿Tu pareja cree que las quesadillas deben llevar queso a fuerza?\n1.-si\n2.-no\n");
		scanf("%i",&a);		
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 7:
		printf("¿Tu pareja soporta tus cambios de humor?\n1.-si\n2.-no\n");
		scanf("%i",&a);		
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 8:
		printf("¿Tu pareja te lleva a comer a tu lugar favorito aunque no le guste?\n1.-si\n2.-no\n");
		scanf("%i",&a);		
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 9:
		printf("¿Tu pareja te acepta tal y como eres?\n1.-si\n2.-no\n");
		scanf("%i",&a);		
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		case 10:
		printf("¿A tu amorcito corazon de melon, no le importa pasar por momentos incomodos contigo? ?\n1.-si\n2.-no\n");
		scanf("%i",&a);
		if(a==1)
			b=2;
		else if(a==2)
			b=1;
			else 
			b=0;
		break;
		default:
		printf("Mi pana que hace acá? salgase porfa\n");
		break;	
	}
	return b+sum;
}
void respuestaImp (float contLove)
{
	 if(contLove<70.00)	
    	printf("Mi estimadx amigx, es mejor salir de ahi antes de ser lastimado :c ... Su promedio de amor fue %f ",contLove);
    else
    	printf("Date como magnate, quizas la relacion vaya por buen camino pero no la descuides, sigue trabajando en ella!\nSu porcentaje de amor fue %f",contLove);
}