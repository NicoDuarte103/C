#include <stdio.h>
#include <stdlib.h>

int main (){
float a,b,c;
printf ("escriba el primer numero "); //primera impresion
fflush(stdin);
scanf ("%f",&a); //primer ingreso de datos
printf ("escriba el segundo numero ");//segunda impresion
fflush(stdin);
scanf ("%f",&b);//segundo ingreso de datos
printf ("escriba el tercer numero ");//tercera impresion
fflush(stdin);
scanf ("%f",&c);//tercer ingreso de datos
if (a<b && a<c){ //menor es a
printf ("el numero minimo es: %g",a); //si a es menor que b y a es menor que c
}
if (b<a && b<c){//menor es b
printf ("el numero minimo es: %g",b);// si b es menor que a y b es menor que c
}
if (c<b && c<a){//menor es c
printf ("el numero minimo es: %g",c);// si c es menor que b y c es menor que a
}
return 0;

}
