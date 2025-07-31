#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes,dia;
    printf(" ¿Cuando es navidad?\n\n");
    printf("Ingrese Mes: ");
    scanf("%d",&mes);
    printf("Ingrese Dia: ");
    scanf("%d",&dia);
    if (mes==12){
        printf("MES ES VERDADERO");}
        else
        if (dia==24){
                printf("DIA ES VERDADERO");}
                else {
                        printf("FALSO");}
    return 0;
