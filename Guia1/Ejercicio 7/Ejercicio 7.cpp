#include <stdio.h>
#include <stdlib.h>
int main (){

int C;
int F;


printf ("escriba valor en grados celcius");
scanf ("%d",&C);
//F= (9/5*C)+32; //da 42,la cuenta en parentesis c =10
F= (C*9/5)+32; // da 50 la cuenta en parentesis c = 10
printf ("el valor en grados celsius es: %d y el valor en grados Farenheit es : %d \n",C,F);

return 0;



}
