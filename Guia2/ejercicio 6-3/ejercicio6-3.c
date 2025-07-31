#include <stdio.h>
#include <stdlib.h>

int main() {
    char vector[3];
    char aux;
    int i, j;

    // Solicitar al usuario que ingrese 3 caracteres
    for (i = 0; i < 3; i++) {
        printf("Escriba el caracter número %d: ", i);
        scanf(" %c", &vector[i]);
    }

    // Ordenar los caracteres alfabéticamente (sin distinguir entre mayúsculas y minúsculas) usando el método de la burbuja
    for (i = 0; i < 2; i++)
            /*Bucle interior para comparar los elementos y realizar intercambios
            //Controla cuántos elementos se deben comparar en cada iteración del bucle exterior
            //Evita comparar elementos que ya están en su posición final después de cada iteración del bucle exterior
            //Reducción del número total de comparaciones para mejorar la eficiencia del algoritmo*/ {
        for (j = 0; j < 2 - i; j++) {
             /*se le resta i para que haya menos pasadas*/
            // Convertir los caracteres a minúsculas antes de comparar
            char char1 = (vector[j] >= 'A' && vector[j] <= 'Z') ? vector[j] + 32 : vector[j]; //ternario, metes comparacion en parentesis y ?luego si es verdadero : si es falso. 32 es la suma para hacerlo minuscula,si no se suma es letra minuscula ya
            char char2 = (vector[j + 1] >= 'A' && vector[j + 1] <= 'Z') ? vector[j + 1] + 32 : vector[j + 1];

            // Si el primer carácter es mayor que el segundo, intercambiarlos
            if (char1 > char2) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }

    // Imprimir los caracteres ordenados
    printf("Caracteres ordenados: ");
    for (i = 0; i < 3; i++) {
        printf("%c", vector[i]);
    }
    printf("\n");

    return 0;
}
