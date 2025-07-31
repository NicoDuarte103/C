#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    int vect[9];
    printf("\nIngrese la cantidad de elementos\n");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        scanf("%d",&vect[i]);}
    printf("\ingrese un valor entero\n\n");
    scanf("%d",&j);
   /* for (i=0;i<=n;i++){
        vect[i]=vect[i]*j;}*/
    for (i=0;i<=n;i++){
    vect[i+2]=vect[i]*j;
    }
    printf("\n escribe valor modificado\n");
    for (i=0;i<=n;i++){
        printf("%d\n",vect[i]);}










    return 0;
}
