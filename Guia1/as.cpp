#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c,d,y,x,z,result,respuesta;

// ((a+b)^2)^2
    printf("Enter the a number: ");
    scanf("%d", &a);

    printf("Enter the power raised: ");
    scanf("%d",&b);
    c = (a+b);
     result = pow(c,2);
     respuesta = pow (result,2); //a^2

    printf("%d^%d = %d", a, b, respuesta);


//(x+y/x-y)

    respuesta = (x+y)/(x-y);
    printf("%d \n",respuesta);
    respuesta = (a+b)*(c/d);
    printf("%d \n",respuesta);
     respuesta = (x*y)/(1-4*z*x);
    printf("%d \n",respuesta);
     respuesta = (x+(y/z))/(x-(y/z));
    printf("%d \n",respuesta);


    return 0;
}
