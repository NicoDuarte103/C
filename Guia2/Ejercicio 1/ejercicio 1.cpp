#include <stdio.h>
#include <stdlib.h>

int main (){
int a;
int b;

printf ("\n escriba numero a: \n");
scanf ("%d",&a);
printf ("\n escriba numero b: \n");
scanf ("%d",&b);
if (a > b){
    printf ("%d es mayor que %d",a,b);
}
if (a < b){
    printf ("%d es mayor que %d",b,a);
}


return 0;
}
