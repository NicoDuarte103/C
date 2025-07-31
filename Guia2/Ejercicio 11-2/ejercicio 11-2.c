#include <stdio.h>
#include <stdlib.h>

int main (){
float a,b,c;
char operacion = 's';
printf("escriba un numero:\n");
fflush(stdin);
scanf("%f",&a);
fflush(stdin);
printf("seleccione operacion: \n");

printf("Suma = S\n");

printf("resta = R\n");

printf("Multiplicacion = M\n");

printf("Division = D\n");
fflush(stdin);
scanf(" %c",&operacion); //tener en cuenta el espacio en blanco sino no funciona

printf("eligio %c\n",operacion);

printf("escriba otro numero:\n");
fflush(stdin);
scanf("%f",&b);
switch(operacion){
     case 'S':
        c= a+b;
        printf("la suma entre %2.f y %2.f es %2.f",a,b,c);
        break;
     case 's':
        c= a+b;
        printf("la suma entre %2.f y %2.f es %2.f",a,b,c);
        break;
     case 'R':
       c= a-b;
        printf("la resta entre %2.f y %2.f es %2.f",a,b,c);
        break;
     case 'r':
       c= a-b;
        printf("la resta entre %2.f y %2.f es %2.f",a,b,c);
        break;
     case 'M':
        c= a*b;
        printf("la multiplicacion entre %2.f y %2.f es %2.f",a,b,c);
        break;
     case 'm':
        c= a*b;
        printf("la multiplicacion entre %2.f y %2.f es %2.f",a,b,c);
        break;
     case 'D':
        c= a/b;
        printf("la division entre %2.f y %2.f es %2.f",a,b,c);
        break;
     case 'd':
        c= a/b;
        printf("la division entre %2.f y %2.f es %2.f",a,b,c);
        break;
        }
return 0;
}
