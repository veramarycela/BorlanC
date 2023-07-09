#include <stdio.h>
#include <conio.h>
#define fila 3
#define columna 5
int main()
{ int nota[fila][columna];
  nota[1][1]=10;
  nota[1][2]=12;
  nota[1][3]=10;
  nota[1][4]=13;
  nota[1][5]=10;
  nota[2][1]=15;
  nota[2][2]=16;
  nota[2][3]=15;
  nota[2][4]=15;
  nota[2][5]=15;
  nota[3][1]=18;
  nota[3][2]=20;
  nota[3][3]=20;
  nota[3][4]=19;
  nota[3][5]=19;
  printf ("%d-", nota[1][1]);
  printf ("%d-", nota[1][2]);
  printf ("%d-", nota[1][3]);
  printf ("%d-", nota[1][4]);
  printf ("%d\n", nota[1][5]);
  printf ("%d-", nota[2][1]);
  printf ("%d-", nota[2][2]);
  printf ("%d-", nota[2][3]);
  printf ("%d-", nota[2][4]);
  printf ("%d\n", nota[2][5]);
  printf ("%d-", nota[3][1]);
  printf ("%d-", nota[3][2]);
  printf ("%d-", nota[3][3]);
  printf ("%d-", nota[3][4]);
  printf ("%d", nota[3][5]);
  getch();
}

