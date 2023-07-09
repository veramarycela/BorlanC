#include <stdio.h>
#include <conio.h>
#include <string.h>

//AUTOR: Marycela Vera
//OBJETIVO: Programa que lea dos cadenas e indique cual es la mayor

int main()
{
 char cadena1[30];
 char cadena2[30];
 int compara;
 
 printf("Coloque el valor de la primera cadena:");
 scanf("%s", cadena1);

 printf("Coloque el valor de la segunda cadena:");
 scanf("%s", cadena2);

 compara=strcmp(cadena1,cadena2);
 if (compara>0)
  printf("%s, es mayor que:%s", cadena1, cadena2);
 else
  printf("%s, es mayor que:%s", cadena2, cadena1);

 getche();
}
