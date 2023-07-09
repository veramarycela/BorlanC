#include <stdio.h>
#include <conio.h>

//AUTOR:MARYCELA VERA
//FECHA: 28/03/2021
//OBJETIVO: PROGRAMA QUE VERIFICA SI UNA PERSONA ES MAYOR O MENOR DE EDAD
//				SEGUN LA EDAD

int main()
{
   int edad;

   printf("COLOQUE LA EDAD:");
   scanf("%d", &edad);

   if ((edad>=1)&&(edad<=100))
      if (edad>=18)
      	printf("USTED ES MAYOR DE EDAD");
      else
      	printf("USTED ES MENOR DE EDAD");
   else
   	printf("EDAD NO VALIDA");


	getch();
}