#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],C[10],i,suma=0,menu;
    printf("seleccione opcion en el menu\n");
    scanf("%d",&menu);
    switch(menu){
case 1:
    for (i=0;i<10;i++){
    B[i]= i;
    if (i%2!=0){
        B[i]=9;
        printf("arreglo modificado: %d %d\n",i,B[i]);
    }
    }
        break;
case 2:
     for (i=0;i<10;i++){
        B[i]=i;}
         for (i=0;i<10;i++){
        suma=B[i]+suma;
        printf("valor : %d sumatoria: %d \n",i,suma);}
break;

case 3:
    for (i = 0;i<10;i++){
    A[i]=i;
    B[i]=i+1;
    C[i]=i+2;
    printf(" \n");
    printf("arreglo A: %d Arreglo B: %d Arreglo C: %d \n",A[i],B[i],C[i]);
    }
    for (i = 0;i<12;i++){

     printf("arreglo AB: %d Arreglo BC: %d Arreglo CA: %d \n",B[i],C[i],A[i]);

    }
case 4:
      for (i=0;i<10;i++){
    B[i]= i;
    if (i%2!=0){
    printf("arreglo %d impar: %d\n",i,B[i]);}
    if (i%2==0){
        printf("arreglo %d par:  %d\n",i,B[i]);
    }
    }
        break;


break;
}

    return 0;
}

