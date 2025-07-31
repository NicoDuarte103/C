#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio,incremento;

    printf("escriba el precio del producto\n");
    scanf("%f",&precio);
    if (precio <= 35000){
    printf("escriba el porcentaje de aumento\n");
    scanf("%f",&incremento);
    incremento= incremento/100;
    printf("el resultado con incremento es: %g \n",precio*incremento+precio);}
    else if(precio >= 35000){
        printf("no requiere incremento");
    }




    return 0;
}
