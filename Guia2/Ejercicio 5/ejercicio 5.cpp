#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

float funcion1;
float funcion2; //variable modificacion consigna
float x;

printf ("escriba valor de x: ");
scanf ("%f",&x);
funcion1 = 5*x+2;
funcion2 = 4*x-5;
if (x<=3){
   printf ("el valor si x <= a 3 es : %g \n",funcion1);}

else{
    printf ("el valor si x > 3  es :\n",funcion2);}


return 0;
}

