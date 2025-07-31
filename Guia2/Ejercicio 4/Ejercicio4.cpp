#include <stdio.h>
#include <stdlib.h>
//programa que indica numeros mayores o menores ocn respecto a los ingresados
//no hay diferencia con el ejercicio 1,solo la cantidad de lineas de codigo
//si se ingresan caracteres iguala todo a cero y se cierra,si se ingresan decimales el valor a toma el valor entero y el valor b toma 0
int main (){

int a,b;
printf("\nIngrese un numero entero\n");
scanf("%d",&a);
printf("\nIngrese otro número entero\n");
scanf("%d",&b);
printf("\n");
//modificacion segun consigna para quie aparezca numero a en todas las salidas
//agregada modificacion condicional
if (a=!b || a == b) {
printf("%d es mayor que %d",a,b);}
else
if (a!=b || a == b) {
printf("%d es mayor que %d",b,a);}
else {
printf("%d es igual a %d",a,b);}



/*if (a>b) {
printf("%d es mayor que %d",a,a);}
else
if (a<b) {
printf("%d es mayor que %d",a,a);}
else {
printf("%d es igual a %d",a,a);}*/

/*if (a>b) {
printf("%d es mayor que %d",a,b);}
else
if (a<b) {
printf("%d es mayor que %d",b,a);}
else {
printf("%d es igual a %d",a,b);}*/
printf("\n");
system("pause");


}
