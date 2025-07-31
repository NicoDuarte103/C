#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int x,p,i,potencia,resultado=1;
   printf("escriba un numero:\n");
   fflush(stdin);
   scanf("%d",&x);
   printf("escriba a que esta elevado\n");
   fflush(stdin);
   scanf("%d",&p);
   resultado= pow (x,p);
   printf("resultado con libreria math.h %d :\n",resultado);
for (i = p; i < p; i++) {
    resultado = resultado * x;


}
 printf("resultado sin libreria math.h %d :\n", resultado);
    return 0;

}
