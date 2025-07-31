#include <stdio.h>
#include <stdlib.h>

int main (){
int mes; //ingreso de mes
int dia; // ingreso de dia

printf ("escriba dia \n"); //primera impresion
fflush(stdin); //limpiador de datos basura
scanf ("%d",&dia); //ingreso de datos de dia
printf ("escriba mes \n"); //segunda impresion
fflush(stdin);
scanf ("%d",&mes); //ingreso de datos de mes
    if (dia == 25 && mes == 12){ //condicional: si dia es igual a 25 y mes es igual a 12 entonces escribe feliz navidad
    printf ("feliz navidad TRUE");}
    else
        printf("feliz navidad FALSE");
return 0;

}
