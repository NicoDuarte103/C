#include <stdio.h>
#include <stdlib.h>
int main (){
int seg;
int min;
int h;
int aux;
int segaux;
printf("escriba un numero en segundos /n");
scanf ("%d",&seg);
h = seg/3600; //ya tenemos horas
aux= seg%3600; // aux ya tenemos minutos
min = aux/60;//ya tenemos minutos
segaux= aux%60; //ya tenemos segundos
printf ("son %d segundos\n",segaux);
printf ("son %d minutos \n",min);
printf ("son %d horas \n",h);






}
