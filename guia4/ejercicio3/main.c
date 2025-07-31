#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    printf("Escriba un numero\n");
    scanf ("%d",&n);


    while (n >=1){ //establezco rango
        n=n/10;
        i= i+1;

    }
    printf("%d",i);
    return 0;
}
