#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //n: Es el numero ingresado usado para definir la cantidad de digitos que fueron ingresados
    //i: son los digitos en total util para mostrar visualmente la potencia
    //m: se iguala a n para separar los digitos en unidades individuales
    //j: es el contador para el for
    //t: es una suma reiterada auxiliar para que visualmente se muestre la suma de potencias de amnstrong
    //h: sirve para saber si es amnstrong o no
    //digito[10]: array para separar digitos
    //digitosuma: resultado de potenciar y sumar los digitos
    int n=0,i=0,m,j,t=0,a=0,h,digito[10],digitosuma=0,rangoinicial,rangofinal,num,selector;
    printf("seleccione una opcion\n");
    printf("1-mostrar todos los numeros amnstrong en un rango\n");
    printf("2-saber si un numero es amnstrong\n");
    scanf("%d",&selector);
    switch (selector){
    case 1:
        printf("seleccione rango inicial ");
        scanf("%d",&rangoinicial);
        printf("seleccione rango final ");
        scanf("%d",&rangofinal);

       for (num = rangoinicial; num <= rangofinal; num++) {
                n = num;
                m = n;
                h = n;
                i = 0;
                digitosuma = 0;

                while (n >= 1) {
                    n = n / 10;
                    i = i + 1;
                }

                n = m; // Restablecer n para usarlo nuevamente
                for (j = i; j >= 1; j--) {
                    digito[j] = n % 10;
                    n = n / 10;
                }

                for (j = i; j >= 1; j--) {
                    digitosuma += pow(digito[j], i);
                    t = t + 1; /*contador auxiliar de digitos visual*/
                }


                if (digitosuma == h) {
                    for (a = 1; a <= t; a++){
                        if (a <= (t-1)){
                            printf("%d^%d + \n",digito[a],i);}

    }

                    printf("El número %d es Armstrong\n", h);
                }
            }
            break;
    case 2:
    printf("escriba un numerox\n");
    scanf("%d",&n);
    m=n;
    h=n;//guarda el numero para comparar si es amnstrong
    while (n>=1){//define cantidad de digitos
    n=n/10;
    i=i+1;
    }
   for (j = i; j >= 1; j--) {//separa los digitos
    digito[j] = m % 10;
    m = m / 10;
}
//suma y potencia de digitos
    for (j = i; j >= 1; j--) {
    digitosuma+=pow (digito[j],i);
    t=t+1; //contador auxiliar de digitos visual
    }

    //digitos visual
    for (a = 1; a <= t; a++){
        if (a <= (t-1)){
        printf("%d^%d + ",digito[a],i);}
        else if (a=t){
           printf("%d^%d = %d\n",digito[a],i,digitosuma);
        }
    }

    if(digitosuma==h){
        printf("el numero es amnstrong");}
     else{
            printf("el numero no es amnstrong");}
            break;

    }
}
