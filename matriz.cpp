#include <stdio.h>
#include <conio.h>
#define fila 3
#define columna 5
//AUTOR:MARYCELA VERA
//OBJETIVO: inicializacion, lectura y escritura de un arreglo bidimensional
int main()
{
	int nota[fila][columna];
   int i,j;
   
   //inicializacion de la matriz
   for(i=1;i<=fila;++i)
   {	for(j=1;j<=columna;++j)
   	{
        nota[i][j]=0;
   	}
    }
   //instrucciones de lectura de la matriz
   for(i=1;i<=fila;i++)
   {	for (j=1;j<=columna;j++)
   	{  printf("Introduzca la nota -> fila[%d] colmuna[%d]: ", i, j);
         scanf("%d",&nota[i][j]);
   	}
   }
   //instrucciones de escritura de la matriz
   for (i=1;i<=fila;i++)
   {  for (j=1;j<=columna;j++)
       {
   	  	printf("%d-", nota[i][j]);
       }
       printf("\n");
   }  
   getch();
}

