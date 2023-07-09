#include <stdio.h>
#include <conio.h>

int G=100;

int factorial (int *n)
{//funcion que calcula el factorial de un numero entero positivo
  int i, f=1;
  for (i=*n; i>=1; --i)
  {
     f= f * i;
  }
  *n = 0;
 // printf ("\n%d", G);

  return f;
}

int main ()
{//funcion principal
	int numero;
   printf ("Coloque un numero entero y positivo:");
   scanf("%d", &numero);

   if (numero>0)
   {
      printf ("\nEl factorial del numero es : %d", factorial(&numero));
      //printf ("\n%d", numero);
   }
  // printf ("\n%d", G);
  	getch();
}
