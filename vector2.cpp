#include <stdio.h>
#include <conio.h>

//AUTOR:MARYCELA VERA
//OBJETIVO: asignación directa y escritura de un arreglo unidimensional

int main()
{
	char vocal[5];

   //asignacion directa de valores a un array
   vocal[1]='A';
   vocal[2]='E';
   vocal[3]='I';
   vocal[4]='O';
   vocal[5]='U';

   //instrucciones de escritura de un array
   printf(" %c -", vocal[1]);
   printf(" %c -", vocal[2]);
   printf(" %c -", vocal[3]);
   printf(" %c -", vocal[4]);
   printf(" %c -", vocal[5]);

   getch();
}
