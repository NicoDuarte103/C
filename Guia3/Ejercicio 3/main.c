#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int A, B, Z;
    int bol;
    B = 1;
    do {
        Z = 0;
        bol = 0;
        do {
            scanf("%d", &A);
            if (A > 0) {
                Z += A;
            } else {
                bol = 1; // Si el número ingresado es negativo, establece bol a 1 para salir del bucle
            }

        } while (!bol); // Continúa leyendo números mientras bol sea falso
        printf("saliste del bucle");
        printf("%d\n", Z); // Imprime la suma de los números positivos ingresados
        B += 2;
    } while (B <= 5); // Repite el proceso mientras B sea menor o igual a 5

    return 0; // Retorna 0 para indicar que el programa se ejecutó correctamente
}*/


int main()
{
    int A, B, Z;
    int bol;
    B = 1;
    while (B <= 5) {
        Z = 0;
        bol = 0;
        while (!bol) {
            printf("saliste del bucle \n");
            scanf("%d", &A);
            if (A > 0) {
                Z += A;
            } else {
                bol = 1; // Si el número ingresado es negativo, establece bol a 1 para salir del bucle
            }

        }

        printf("resultante %d\n", Z);

    }

    return 0;
}















