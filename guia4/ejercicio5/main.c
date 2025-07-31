#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,condicion,sueldo[5],uv=55,peso=100;

    for (i = 1; i<=5; i++){
        sueldo[i];
        switch (i){
    case 1:
        sueldo[i] = 50;
        printf("el presidente cobra %d u.v y su equivalente en pesos es %d\n",sueldo[i],(sueldo[i]*55)/100);
        break;

    case 2:
        sueldo[i] = 30;
        printf("el gerente  cobra %d u.v y su equivalente en pesos es %d\n",sueldo[i],(sueldo[i]*55)/100);
        break;
    case 3:
        sueldo[i] = 20;
        printf("el jefe del sector cobra u.v %d y su equivalente en pesos es %d\n",sueldo[i],(sueldo[i]*55)/100);
        break;
    case 4:
        sueldo[i] = 10;
        printf("el empleado administrativo cobra u.v %d y su equivalente en pesos es %d\n",sueldo[i],(sueldo[i]*55)/100);
        break;
    case 5:
        sueldo[i] = 7;
        printf("el empleado de maestranza cobra %d u.v y su equivalente en pesos es %d\n",sueldo[i],(sueldo[i]*55)/100);
        break;
        }



    }

    return 0;
}
