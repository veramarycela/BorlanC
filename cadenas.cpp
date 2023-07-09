#include <stdio.h>
#include <conio.h>
#include <string.h>

//AUTOR: Marycela Vera
//OBJETIVO: Programa para saber si dos cadenas de caracteres son iguales

int main()
{
 char cadena1[10];
 char cadena2[20];

 printf("Coloque el valor de la primera cadena:");
 scanf("%s", cadena1);
 printf("Coloque el valor de la primera cadena:");
 scanf("%s", cadena2);
 
 if (strcmp(cadena1, cadena2))
    printf("las cadenas son diferentes");
  else
   printf("las cadenas son iguales");

   getche();
}
