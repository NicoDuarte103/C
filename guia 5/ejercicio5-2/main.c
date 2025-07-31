#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float A[10],B[10],C[10],N;

    printf("ingrese el rango de valores\n");
    scanf("%f",&N);
    for (i=0;i<N; i++){
        A[i]=i;
        if ((int)A[i]%2==0){
            B[i]=i;
        }
         if ((int)A[i]%2!=0){
            C[i]=i;
        }
    }
    for (i=0;i<N; i++){
        printf("Valores de A: %f Valores de B: %f Valores de C: %f\n",A[i],B[i],C[i]);


    }


    return 0;
}
