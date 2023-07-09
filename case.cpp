#include <stdio.h>
#include <conio.h>
//Objetivo: hacer un programa que lea un numero entre 1 y 7 y visualice
//          en pantalla el dia de la semana correspondiente.

int main ()
{
	int dia=0;

   printf ("Coloque un numero entero entre 1 y 7:");
   scanf("%d", &dia);

   switch (dia)
      {
      	case 1: printf ("LUNES"); 		break;
         case 2: printf ("MARTES"); 	break;
         case 3: printf ("MIERCOLES"); break;
         case 4: printf ("JUEVES");  	break;
         case 5: printf ("VIERNES");   break;
         case 6: printf ("SABADO");   	break;
         case 7: printf ("DOMINGO");   break;
         default: printf ("DIA NO VALIDO");
      }

	getch();
   
}