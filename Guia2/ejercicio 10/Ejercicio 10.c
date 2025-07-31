#include <stdio.h>
#include <stdlib.h>

int main (){

int x =2;
int y = 3;
int z = 4;
int m;
printf("ingrese un numero :");
scanf("%d",&m);

switch (m) {
        case 2:
        printf("El valor de %d es igual a %d uno de los numeros ingresados",m,x);
        break;
        case 3:
        printf("El valor de %d es igual a %d uno de los numeros ingresados",m,y);
        break;

        case 4:
        printf("El valor de %d es igual a %d uno de los numeros ingresados",m,z);
        break;
        default:
        printf("El valor de %d no coincide con ninguno de los ingresados",m);
        break;



            }



/*if (m==x) {
printf("El valor de %d es igual a %d",m,x);}
else
if (m==y) {
printf("El valor de %d es igual a %d",m,y);}
else
if (m==z) {
printf("El valor de %d es igual a %d" ,m,z);}
else
printf("El valor de %d no coincide con ninguno de los ingresados",m); */
return 0;
}

