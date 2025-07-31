#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=2,c,d,e;
    float x,y;
    x= a/b;//esto hace que x valga el resto de a/b
  c= a < b && 25;//esto dice que c es
    d= a + (b++);//esto dice que d tiene el valor de a + b incrementdo en 1
    e= (++a) - b;//esto dice que e tiene el calor de a incrmentado en 1 menos b
    y=(float) a/b;//esto dice que y es igual a, a/b y que puede ser flotante(decimal)
    printf("%d \n"),a;
    printf("%d \n"),b;
    printf("%d \n"),c;
    printf("%d \n"),d;
    printf("%d \n"),e;
    printf("%f \n"),x;
    printf("%f \n"),y;
    return 0;
}
