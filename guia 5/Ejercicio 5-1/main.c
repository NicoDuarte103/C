#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],P,i,j;
    printf("ingrese rango/n");
    scanf ("%d",&j);
    printf("Ingrese valor de P:\n");
    scanf("%d",&P);
    for (i=0;i<=j;i++){
        A[i]=i;
        B[i]=A[i];
        if (B[i]==P){
            B[i]=0;
            printf("valor P %d eliminado\n",P);
        }
        printf(" A %d\n",A[i]);
        printf(" B %d\n",B[i]);
    }
    return 0;
}
