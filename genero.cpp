#include <stdio.h>
#include <conio.h>

int main()
{
	char genero;

   printf("POR FAVOR COLOQUE SU GENERO USANDO SOLO LA LETRA (F/M):");
   scanf("%c", &genero);
   
  	if ((genero == 'F')||(genero=='f'))
      printf("FEMENINO");
   else
   	if ((genero=='M') || (genero=='m'))
         printf("MASCULINO");
      else
         printf ("USTED INTRODUJO UNA LETRA DIFERENTE DE F O M");
         
   getch();
}