#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],i,N;
    printf("escriba un numero\n");
    scanf ("%d",&N);
    printf("orden de vector A descendente\n");
    for (i=N;i>=0;i--){
    A[i]=i;
    printf("%d\n",A[i]);
    }

    printf("orden de vector B autogenerado sobre si mismo\n");

    for (i=N;i>=0;i--){
    B[i]= A[i];

    printf("%d\n",B[i]);
    }

    return 0;
}
