#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define N 10
int main()
{
    int n,i,j,digito,digitoaux;
    float narcicista[N];
    printf ("ingrese un numero\n");
    scanf ("%d",&n);
    digito = 10 - n%10;
    digitoaux = digito+n%10;//util para particionar digitos
    j= 0;
    //for (i = 0; i<n; i++){//rango de numeros del 0 hasta el ingresado




         //   }
        while (n>=1){
                    n/=10;
                    j+=1;
                            }

   printf ("%d",j);




    }




