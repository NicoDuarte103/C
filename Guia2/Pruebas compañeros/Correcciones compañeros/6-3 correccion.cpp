#include <stdio.h>
#include <stdlib.h>

int main (){
char a,b,c;
char aux;
printf ("ingrese primer caracter\n");
scanf (" %c",&a);
printf ("ingrese segundo caracter\n");
scanf (" %c",&b);
printf ("ingrese tercer caracter\n");
scanf (" %c",&c);

//primer comparacion
if (a<b && a<c){

        if (a<b && a<c){
            printf("1el primer caracter es %c \n",a);}
}

if (a>b && a<c){
            printf ("el segundo caracter es %c \n",a);}
 if (a>b&& a>c){
            printf("3el tercer caracter es %c \n",a);}



return 0;
}
