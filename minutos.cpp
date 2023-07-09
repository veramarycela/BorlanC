#include <stdio.h>
#include <conio.h>

//AUTOR:MARYCELA VERA
//FECHA:22/03/2021
//OBJETIVO: CALCULAR LOS MINUTOS QUE EL AUTO TARDA EN RECORRER UNA DISTANCIA DADA


int main()
{
//DECLARACION DE VARIABLES
   float distancia, minutos;
//ENTRADA
	printf ("COLOQUE LA DISTANCIA:");
   scanf("%f", &distancia);
//PROCESO
   minutos=(distancia*80)/100;
//SALIDA
   printf ("EL TIEMPO QUE EL AUTO TARDO EN RECORRER:%f ", distancia, " ES:%f ", minutos, "MINUTOS");

   getch();
}