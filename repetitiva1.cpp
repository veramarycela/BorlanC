#include <stdio.h>
#include <conio.h>

//AUTOR:MARYCELA VERA
//FECHA: 30/03/2021
//OBJETIVO: leer las notas de Ingles del primer, segundo y tercer lapso
//				de un estudiante, e imprima en pantalla la nota definitiva
//          (o nota promedio) de esa asignatura.
       
int main()
{
   int lapso, nota, suma, promedio;

   suma=0;
   lapso=1;

   while ((lapso>=1)&&(lapso<=3))
   {
   	printf("COLOQUE LA NOTA DEL LAPSO NRO %d:", lapso);
      scanf("%d", &nota);
      suma=suma+nota;
      lapso=lapso+1;
   }
   promedio=suma/3;
   printf("LA NOTA DEFINITIVA DE INGLES ES:%d", promedio);

   getch();
}