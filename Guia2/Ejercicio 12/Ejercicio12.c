#include <stdio.h>
#include <stdlib.h>

int main (){

    int peso;


    printf("\t\t   Escriba el peso en kg de la persona: \n");
    fflush (stdin);
    printf("\t\t    ----------------------------------\n");
    printf("\033[3;38H");
    scanf("%d",&peso);

        switch(peso){
        case 0 ... 39:
        printf("\t\t\t   La persona es DELGADA");
        break;
        case 40 ... 59:
        printf("\t\t\t   La persona pesa NORMAL");
        break;
        case 60 ... 79:
        printf("\t\t\t   La persona tiene SOBREPESO");
        break;
        case 80 ... 999:
        printf("\t\t\t   La persona es OBESA");
        break;
        }


}
