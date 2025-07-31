#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sueldo[10],sueldov[10], cantidad, i , j, aumento;
    char nombre[5][20]; // Matriz de 5 cadenas de caracteres de longitud máxima 20

    printf("Ingrese cantidad de empleados: \n");
    scanf("%d", &cantidad);


    for (i = 0; i < cantidad; i++) {
        printf("Ingrese nombre del empleado %d: \n", i+1);
        scanf("%s", nombre[i]);
        printf("Ingrese el sueldo: \n");
        scanf("%d", &sueldo[i]);

    }

    printf("Empleados ingresados:\n");
    for (i = 0; i < cantidad; i++) {
        printf("Nombre: %s, Sueldo: %d\n", nombre[i], sueldo[i]);
        j=0;
            while (sueldo[i]<50000 && j==0){
                sueldov[i]=sueldo[i];
                sueldo[i]=(sueldo[i]*0.10)+sueldo[i];
                printf("aumento del 10%% sueldo nuevo: %d\n",sueldo[i]);
                 printf("sueldo anterior: %d\n",sueldov[i]);
                j++;}
            j=0;
            while (sueldo[i]>50000 && j==0){
                sueldov[i]=sueldo[i];
                sueldo[i]=(sueldo[i]*0.08)+sueldo[i];
                printf("aumento del 8%% sueldo nuevo: %d\n",sueldo[i]);
                printf("sueldo anterior: %d\n",sueldov[i]);
                j++;
                }
    }

    return 0;
}

