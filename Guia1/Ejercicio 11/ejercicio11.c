#include <stdio.h>
#include <stdlib.h>

int main (){
int numero;
int digito1;
int digito2;
int digito3;
int digito4;
printf ("ingrese un numero ");
scanf("%d",&numero);
 digito1 = (numero%10000 - numero%1000)/1000;
 digito2 = (numero%1000 - numero%100)/100;
 digito3 = (numero%100 - numero%10)/10;
 digito4 = numero%10;
 printf ("%d %d %d %d",digito1,digito2,digito3,digito4);





}
