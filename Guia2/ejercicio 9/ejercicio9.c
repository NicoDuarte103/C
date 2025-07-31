#include <stdio.h>
#include <stdlib.h>
int main (){

int a;
printf("ingrese un numero: ");
scanf("%d",&a);
    if (a%2 == 0) {
        printf("%d es múltiplo de 2",a);}
        if (a%3 == 0 && a%2 == 0){
                printf(" y tambien multiplo de 3");}
    else
    if (a%3 == 0) {
            printf("%d es múltiplo de 3",a);}
    else
    if (a%2 != 0 && a%3 != 0)
        {
        printf("no es multiplo ni de 2 ni de 3");
    }



}
