#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[10];
    int i;
    for (i = 0; i<10;i++){
    A[i]=i;
    }
    for (i = 0; i<10;i++){
    printf("%d : %2.f\n",i,A[i]);
    }
    A[5]=3.5;
    printf("a5 vale %2.f\n",A[5]);
    A[2]= A[8];
    printf("a2 vale %2.f\n",A[2]);
    A[4]=A[9];
   printf("a4 vale %2.f",A[4]);




    return 0;
}
