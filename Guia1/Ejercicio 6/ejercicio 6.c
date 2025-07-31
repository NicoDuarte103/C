#include <stdio.h>
#include <stdlib.h>
int main (){

printf("escriba un valor en pies \n");
float pie;
scanf ("%f",&pie);
float pulgada = (pie*12);
float yarda = (pie/3);
float cm= (pie*30.48);
float mts = (pie*0.3048);
printf("son %f pies \n",pie);
printf("son %f yardas \n",yarda);

printf("son %f pulgadas \n",pulgada);
printf("son %f centimetros \n",cm);
printf("son %f metros \n",mts);

return 0;


}
