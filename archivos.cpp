#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//AUTOR: Marycela Vera
//OBJETIVO: programa que lee las vocales y las almacena en un archivo.
int main()
{
	FILE *archivo;
	char letra;
   int i;
	if (!(archivo=fopen("C:\\VOCALES.TXT","w+")))
	{ printf("Error al abrir el fichero");
     getche();
     exit(0); 
	}
   else
   { for (i=1; i<=5; ++i)
     {printf ("Introduce la Vocal %d: ", i);
      fflush(stdin);
      scanf("%c",&letra);
      fputc(letra,archivo);
     }
     rewind(archivo);
     while(!(feof(archivo)))
     {letra=fgetc(archivo);
	  	printf("%c",letra);
     }
   }
   fclose(archivo);
   getche();
}