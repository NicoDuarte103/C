#include <stdio.h>
#include <stdlib.h>

int main()
{
    int corte,precio=500;
    printf("seleccione su corte\n");
    printf("1-caballero\n");
    printf("2-niño\n");
    printf("3-dama\n");
    scanf("%d",&corte);

    switch(corte){
case 1:
    printf("eligio corte de caballero,su precio es de :$ %d",precio);
    break;
case 2:
    printf("eligio corte de niño,su precio es de : $ %d",precio/2);
    break;
case 3:
    printf("eligio corte de dama,su precio es de : $ %d",precio+100);
    break;

    }
    return 0;
}
