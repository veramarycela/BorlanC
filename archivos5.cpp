#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//AUTOR: Marycela Vera
//OBJETIVO: Programa que abre, lee, escrib ey cierra un archivo binario

int main()
{
   FILE *pf;

   type

	int numero;


	if (!(pf=fopen("C:\\DATOS.DAT","w+b")))
	{
		printf("Error al abrir el fichero");
      getche();
		exit(0);
	}
	else
	{
      printf ("coloque un numero:");
      scanf("%d",&numero);

		fwrite(&numero,sizeof(int),1,pf);

      rewind(pf);
      numero=0;
      fread(&numero,sizeof(int),1,pf);
		printf("%d",numero);  

      fclose(pf);
	}

   getche();
}