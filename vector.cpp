#include <stdio.h>
#include <conio.h>

//AUTOR:MARYCELA VERA
//OBJETIVO: inicializacion, lectura y escritura de un arreglo unidimensional

int main()
{
	char vocal[5];
   int i;
   
   //inicializacion de un array
   for (i=1; i<=5; ++i)
   {
      vocal[i]=' ';
   }
   //instrucciones de lectura de un array
   for (i=1; i<=5; ++i)
   {  printf("Vocal Nro %d:", i);
      fflush(stdin);
   	scanf("%c", &vocal[i]);
   }
   //instrucciones de escritura de un array
   for (i=1; i<=5; ++i)
   {
      printf(" %c -", vocal[i]);
   }
   getch();
}

