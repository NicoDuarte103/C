#include <stdio.h>
#include <stdlib.h>
int main () {
    int a = 10,b=3,c,d,e;
    float x,y;
    x=a/b;
    c= a<b && 25;
    d= a+b++;
    e= ++a-b;
    y= (float) a/b;
printf("%d\n%d\n%d\n%d",a,b,c,d,e);
printf ("%f\n%f",x,y);

return 0;
}
