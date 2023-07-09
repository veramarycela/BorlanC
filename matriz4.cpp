#include <stdio.h>
#include <conio.h>
#define fila 4
#define columna 4

//AUTOR:MARYCELA VERA
//OBJETIVO: rellenar un matriz identidad de 4x4
int main()
{
	int matriz[fila][columna];
   int i,j;
   //Relleno de la matriz
   for(i=1;i<=fila;++i)
   {	for(j=1;j<=columna;++j)
   	{
        if (i==j)
         matriz[i][j]=1;
        else
         matriz[i][j]=0;
   	}
    }
   //instrucciones de escritura de la matriz
   for (i=1;i<=fila;i++)
   {  for (j=1;j<=columna;j++)
       {
   	  	printf("%d", matriz[i][j]);
       }
       printf("\n");
   }  
   getch();
}

