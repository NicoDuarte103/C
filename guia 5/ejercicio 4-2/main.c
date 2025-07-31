#include <stdio.h>
#include <stdlib.h>

int main()
{//el valor y[i]no esta definido porque en el for se cancela cuando i lo supera
    int j,i,y[10],l;
    printf("ingrese tamaño vector \n");
    scanf("%d",&j); //ingresa tamaño de vector
    for(i=0;i<j;i++){
    printf("ingrese valor vector %d\n",j);
    scanf("%d",&y[i]);}//asigna valores y tamaño pre ingresado al vector
    l=0;//valor definido
    printf("valor final del vector %d\n",y[i]);
    printf("valor L del vector %d\n",l+l);


    printf("Hello world!\n");
    return 0;
}
