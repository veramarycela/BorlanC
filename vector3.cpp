#include <stdio.h>
#include <conio.h>

//AUTOR:MARYCELA VERA
//OBJETIVO: calcular la suma y la media de todos los elementos de un array

int main()
{
	int vector[10];
   int i, suma, media;
   //inicializacion de un array
   for (i=1; i<=10; ++i)
      vector[i]=0;
   //leer e introducir los elementos en el array
   for (i=1; i<=10; ++i)
   {  printf("Elemento Nro %d:", i);
      scanf("%d", &vector[i]);
   }
   //suma de los numeros que contiene el array
   suma=0;
   for (i=1; i<=10; ++i)
      suma = suma + vector[i];
   media = suma/10;

   printf("Suma:%d", suma);
   printf("\n Media:%d", media);
   getch();
}
