#include <stdio.h>
#include <stdlib.h>

int main (){

int x;
int y;
float resultado;
int resultado2;
printf("escribe un numero:\n");

scanf("%d",&x);
printf ("escriba un numero para dividirlo\n");
scanf("%d",&y);
/*printf("%d",x);
printf("%d",y); */

resultado =(float) x/y;
//printf("%f",resultado);
resultado2 = x%y;
//printf("%d",resultado2);
printf (" resultado division: %f resultado modulo %d",resultado,resultado2);


return 0;
}
