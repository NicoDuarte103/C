#include <stdio.h>
#include <stdlib.h>
int main (){
int numero1;
int numero2;
int digito1_n1;
int digito2_n1;
int digito3_n1;
int digito1_n2;
int digito2_n2;
int digito3_n2;
int igual_1;
int igual_2;
int igual_3;
int igual_final;
printf("escriba un numero a multiplicar \n");
scanf ("%d",&numero1);
printf("escriba su multiplicador \n");
scanf ("%d",&numero2);



digito1_n1 = (numero1%1000 - numero1%100)/100;
digito2_n1 = (numero1%100 - numero1%10)/10;
digito3_n1 = numero1%10;
// printf("%d \n %d \n %d \n",digito1_n1,digito2_n1,digito3_n1);
digito1_n2 = (numero2%1000 - numero2%100)/100;
digito2_n2 = (numero2%100 - numero2%10)/10;
digito3_n2 = numero2%10;
 //printf("%d \n %d \n %d \n",digito1_n2,digito2_n2,digito3_n2);
igual_1= digito3_n2*numero1;
igual_2= digito2_n2*numero1;
igual_3= digito1_n2*numero1;
igual_final = numero1*numero2;

printf("la cuenta resultante es: \n");
printf("    %d\n",numero1);
printf("X   %d\n",numero2);
printf("_____________\n");
printf("   %d\n",igual_1);
printf("   %d\n",igual_2);
printf(" %d\n",igual_3);
printf("_____________\n");
printf("%d\n",igual_final);


return 0;
}
