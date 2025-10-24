/* Diseña un programa que muestre un menú con las siguientes opciones:

Sumar los números del 1 al N (usando FOR)
Factorial de un número (usando WHILE)
Verificar si un número es primo (usando IF, ELSE IF y FOR)

Salir
El programa debe pedir al usuario que elija una opción y luego realice la operación correspondiente.
Usa un DO WHILE para mostrar el menú hasta que el usuario elija salir.
  */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int sw = 0, n_number = 0, n_ciclos_for1 = 0, n_ciclos_for3 = 0, factorial = 0, num_primo = 0;

  do
  {

    printf("\n");
    printf("	Bienvenido, seleccione una opcion \n \n");
    printf("	1.- Sumar numeros (sentencia FOR) \n");
    printf("	2.- Factorial numeros (sentencia WHILE) \n");
    printf("	3.- Verificar si es numero primo (sentencia FOR + IF ...) \n");
    printf("	4.- SALIR ...\n");
    printf("\n");
    printf("	    ");
    scanf("%d", &sw);

    switch (sw)
    {
    case 1:
      printf("\n");
      printf("	Caso numero 1, ingrese cantidad de ciclos : ");
      scanf("%d", &n_ciclos_for1);
      printf("\n");

      if (n_ciclos_for1 < 0)
      {
        printf("\n");
        printf("        Debe ingresar un valor entero!!!");
        printf("\n \n");
        break;
      }

      for (int i = 0; i < n_ciclos_for1; i++)
      {
        int aux_number = 0;
        printf("	Ingrese valor N° %d : ", i);
        scanf("%d", &aux_number);

        n_number = n_number + aux_number;
      }
      printf("\n");
      printf("        La sumatoria de todos los numeros es : %d", n_number);
      printf("\n \n");
      break;

    case 2:
      printf("\n");
      printf("	Caso numero 2, ingrese numero a calcular factorial : ");
      scanf("%d", &factorial);
      printf("\n");

      if (factorial < 0)
      {
        printf("\n");
        printf("        Debe ingresar un valor entero!!!");
        printf("\n \n");
        break;
      }

      int aux_factorial = 0, acum_factorial = 1;

      while (aux_factorial < factorial)
      {
        aux_factorial++;
        acum_factorial *= aux_factorial;
        // printf("  %d : %d : %d --- ", acum_factorial, factorial, aux_factorial);
      }
      printf("\n");
      printf("        El factorial de %d es %d", factorial, acum_factorial);
      printf("\n \n");
      break;

    case 3:
      printf("\n");
      printf("	Caso numero 3, numeros primos, ¿cuantos numeros desea evaluar? ");
      scanf("%d", &n_ciclos_for3);
      printf("\n");

      if (n_ciclos_for3 < 0)
      {
        printf("\n");
        printf("        Debe ingresar un valor entero!!!");
        printf("\n \n");
        break;
      }

      for (int i = 0; i < n_ciclos_for3; i++)
      {
        int result_mod = 0, aux_num_primo = 0;

        printf("\n");
        printf("        Ingrese valor a evaluar :");
        scanf("%d", &num_primo);
        printf("\n");

        if (num_primo < 0)
        {
          printf("\n");
          printf("        No existen numeros primos negativos");
          printf("\n \n");
          break;
        }

        for (int i = 1; i < (num_primo + 1); i++)
        {
          if ((num_primo % i) == 0)
          {
            aux_num_primo++;
          }
          // printf("%d", i);
        }

        if (aux_num_primo == 2)
        {
          printf("\n");
          printf("        el numero %d es un numero PRIMO", num_primo);
          printf("\n ");
        }
        else
        {
          printf("\n");
          printf("        el numero %d NO es un numero primo", num_primo);
          printf("\n ");
        }
      }
      printf("\n");

      break;

    case 4:
      printf("\n");
      printf("	Caso numero 4, SALIR!");
      printf("\n");
      break;
    }

  } while (sw != 4);

  return (0);
}