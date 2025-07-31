#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,POSITIVOS[10],NEGATIVOS[10],SUMANEGATIVOS[10],PRODUCTOPOSITIVOS[10];
    printf("ingrese valores: \n");
    scanf("%d",&N);
    for (i=0;i<N;i++){

        POSITIVOS[i] = i;
        NEGATIVOS[i]=i*-1;

    }
     for (i=0;i<N;i++){
        if (i>0){
        SUMANEGATIVOS[i]= NEGATIVOS[i]+NEGATIVOS[i-1];
        PRODUCTOPOSITIVOS[i]= POSITIVOS[i]*POSITIVOS[i-1];
        printf("valores positivos %d valores negativos %d suma acumulada negativos %d producto de positivos %d\n",POSITIVOS[i],NEGATIVOS[i],SUMANEGATIVOS[i],PRODUCTOPOSITIVOS[i]);
        }}

    return 0;
}
