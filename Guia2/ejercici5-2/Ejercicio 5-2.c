
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

int x;
double f;
scanf("%d",&x);

if (x==(-1)) {
f=(-x-1);}
else
    if (x>=1){
    f=x-1;}
else
     f = 1 - sqrt(x);
    printf("f(%d)=%g",x,f);

return 0;
}
