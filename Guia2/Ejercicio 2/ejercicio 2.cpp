#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){



int a,b,c,x;
printf ("escriba valor de a: \n");
scanf ("%d",&a);
printf ("escriba valor de b: \n");
scanf ("%d",&b);
printf ("escriba valor de c: \n");
scanf ("%d",&c);

//discriminante
x = pow (b,2)-4*a*c;

if (x > 0) {

printf ("x tiene dos soluciones en los numeros reales");

}
if (x < 0) {

printf ("x tiene solucion en los numeros complejos");

}
if (x = 0) {

printf ("x tiene una solucion en los numeros reales");

}

return 0;
}
