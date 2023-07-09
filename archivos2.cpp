#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//AUTOR: Marycela Vera
//OBJETIVO: Programa que crea un archivo con la lista de flores

int main()
{
   FILE *archivo;
	char cad[30]="Rosas, Tulipanes, Girasoles ";
   char cad2[30]="                            ";
   if (!(archivo=fopen("C:\\FLORES.TXT","a+")))
	{
		printf("Error al abrir el fichero");
      getche();
		exit(0);
	}
	else
	{  fputs(cad,archivo);
      rewind(archivo);
      fgets(cad2,30,archivo);
		printf("%s",cad2);
      fclose(archivo);
	}
   getche();
}