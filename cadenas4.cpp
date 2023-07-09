#include <stdio.h>
#include <conio.h>
#include <string.h>

//AUTOR: Marycela Vera
//OBJETIVO: Programa que dice ai un cadena esta dentro de otra

int main()
{
 char cadena1[50];
 char cadena2[30];

 printf("Coloque el valor de la primera cadena:");
 scanf("%s", cadena1);
 
 printf("Coloque el valor de la segunda cadena:");
 scanf("%s", cadena2);

 if (strstr(cadena1,cadena2))
  printf("%s, esta dentro de:%s", cadena2, cadena1);
 else
  printf("No se encorto la cadena");

 getche();
}
