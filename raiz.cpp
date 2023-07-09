#include <stdio.h>
#include <conio.h>
#include <math.h>

//AUTOR:MARYCELA VERA
//FECHA: 28/03/2021
//OBJETIVO: PROGRAMA QUE UTILIZA LA FUNCION SQRT Y POW DE LA LIBRERIA MATH.H

int main()
{
   float a, b, c;
   double x;

	scanf ("%f", &a);
   scanf ("%f", &c);
   scanf ("%f", &b);

   x=sqrt(pow(b,2)-(4*a*c))/(2*a);

   printf ("%f", x);

	getch();
}