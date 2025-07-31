#include <stdio.h>
#include <stdlib.h>2

int main()
{
    int d, m, fd, fm;
    printf("Ingrese la fecha   /  \n");
    printf("\033[1;18H"); //****modificado cambia posicion cursor
    scanf("%d",&d); //******modificado
    printf("\033[1;21H");
    scanf("%d",&m);
    //--------------------------------------------------------------//
    if (d == 25 && m == 12){//compueba si son igual a 25 y 12
        printf("FELIZZZZ NAVIDADDD");}
    else
        if (d < 25 && m < 12){//aca si son ambos menores dice cunto falta
            fd = 25 - d;
            fm = 12 - m;
            printf("Faltan %d dias y %d meses para navidad", fd, fm);
            }
    else
        if (d < 25 && m == 12){//aca si son ambos menores dice cunto falta
            fd = 25 - d;
            fm = 12 - m;
            printf("Faltan %d dias y %d meses para navidad", fd, fm);
            }
    else
        if (d > 25 && m < 12){//aca ve si el numero es mayor que 25 y si es asi dice cuantos dias y meses faltan para navidad
        fd = d - 25;
        fd = 30 - fd;
        fm = 12 - m;
        printf("Faltan %d dias y %d meses para navidad", fd, fm);
return 0;
    }
    //--------------------------------------------------------------//
    //aca es en el caso de que si solo lo diferente es el dia
    if (d > 25 && d <31){
        fd = d - 25;
        printf("Ya han pasado %d dias desde navidad", fd);}

    /*}else if (d < 25){
        fd = 25 - d;
        printf("faltan %d dias para navidad", fd);*/
    //--------------------------------------------------------------//
    else if (m > 12 ){//Y aca si el mes es diferente ********* corregido a si se sobrepasa de mes
        printf("error mes inexistente\n");
    }
    if (d > 31){
       printf("error dia inexistente\n");

    }
    return 0;
}
