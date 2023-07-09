#include <stdio.h>
#include <conio.h>
#include <string.h>

//AUTOR: Marycela Vera
//OBJETIVO:programa que imprime cada palabra de la cadena y sustituye
//         el espacio en blanco por el carácter /.

int main()
{
 char cadena1[30]="+58-0424-0987654";
 char cadena2[2]="-";
 char *direccion;
 
 direccion=strtok(cadena1,cadena2);

 while(direccion)
 {
  printf("%s\n",direccion);
  direccion=strtok('\0',cadena2);
 }

 getche();
}
