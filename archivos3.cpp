#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//AUTOR: Marycela Vera
//OBJETIVO: Programa que lea un numero entero y lo almacene en un archivo
int main()
{
   FILE *archivo;
	int numero;
	if (!(archivo=fopen("C:\\NUMERO.DAT","w+b")))
	{
		printf("Error al abrir el fichero");
      getche();
		exit(0);
	}
	else
	{
      printf ("coloque un numero:");
      scanf("%d",&numero);
		fwrite(&numero,sizeof(int),1,archivo);
      rewind(archivo);
      numero=0;
      fread(&numero,sizeof(int),1,archivo);
		printf("%d",numero);
      fclose(archivo);
	}
   getche();
}