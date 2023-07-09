#include <stdio.h>
#include <conio.h>
#include <string.h>

//AUTOR: Marycela Vera
//OBJETIVO: Programa para saber si un caracter esta dentro de una cadena 

int main()
{
 char cadena1[10];
 char caracter;

 printf("Coloque un caracter:");
 scanf("%c",&caracter);
 
 printf("Coloque una cadena:");
 scanf("%s", cadena1);

 if (strchr(cadena1, caracter))
   printf("el caracter fue encontrado");
 else
   printf("No se encontro el caracter");



   getche();
}