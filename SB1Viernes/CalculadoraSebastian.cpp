#include <stdio.h>

int main()
{
	int opcion=0;
	float X=0, Y=0, Z=0;
	
	do
	{		
	printf("\n");
	printf( "MathSolver-Tu Programa para Solucionar Problemas Matematicos Basicos\n");
	printf( "\n");
	printf( "Bienvenido =D\n");
	printf( "\n");
	printf( "Menu de Opciones:\n");
	printf( "\n");
	printf("1.-Suma(adicion)\n");
	printf("2.-Resta(sustraccion)\n");
	printf("3.-Multiplicacion\n");
	printf("4.-Division\n");
	printf("5.-Comparacion de numeros(evaluar quien es mayor)\n");
	printf("6.-Finalizar el Programa.\n");
	printf( "\n");
	printf("Indique la Operacion a Realizar:\n");
	scanf("%d",&opcion);
	
	switch(opcion)
	{
		case 1:
			printf("\n");
			printf("Suma(adicion)\n");
			printf( "\n");
			printf("Ingrese el valor de X\n");
			scanf("%f",&X);
			printf("Ingrese el valor de Y\n");
			scanf("%f",&Y);
			
			Z= X+Y;
			
			printf("\n El resultado de la suma entre X + Y es igual a Z= %.2f",Z);
			printf("\n");
			
			break;
			
		case 2:
			printf("\n");
			printf(" Resta(sustraccion)\n");
			printf( "\n");
			printf("Ingrese el valor de X\n");
			scanf("%f",&X);
			printf("Ingrese el valor de Y\n");
			scanf("%f",&Y);
			
			Z= X-Y;
			
			printf("\n El resultado de la resta entre X - Y es igual a Z= %.2f",Z);
			printf("\n");
			
			break;
			
		case 3:
			printf("\n");
			printf(" Multiplicacion)\n");
			printf( "\n");
			printf("Ingrese el valor de X\n");
			scanf("%f",&X);
			printf("Ingrese el valor de Y\n");
			scanf("%f",&Y);
			
			Z= X*Y;
			
			printf("\n El resultado de la multiplicacion entre X * Y es igual a Z= %.2f",Z);
			printf("\n");
			
			break;
			
	    case 4:
	    	printf("\n");
			printf(" Division\n");
			printf( "\n");
			printf("Ingrese el valor de X\n");
			scanf("%f",&X);
			printf("Ingrese el valor de Y\n");
			scanf("%f",&Y);
			
			if (Y != 0 ) 
			   {
				   printf("Error: No se puede dividir entre cero.\n");
                }
                else
				{
                     Z = X / Y;
                     
                    printf("\n El resultado de la division entre X / Y es igual a Z= %.2f", Z );
                }
                break;
			
		case 5:
			printf("\n");
			printf("Comparacion de numeros(evaluar quien es mayor)\n");
			printf( "\n");
			
			printf("Ingrese el valor de X\n");
			scanf("%f",&X);
			
			printf("Ingrese el valor de Y\n");
			scanf("%f",&Y);
			
			break;
			
			if (X > Y){
				printf("X es mayor que Y\n");
				}
			else {
				printf("Y es mayor que X\n");
			}
			
		case 6:
			printf("\n");
			printf("Finalizando el programa...");
			printf("\n");
			printf("El programa ha finalizado exitosamente!");
			break;		
	}
	
	} while (opcion != 6);
	
	return 0;
}
	
	
