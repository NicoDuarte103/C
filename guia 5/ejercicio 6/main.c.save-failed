#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//elemento de vector,tamaño
    int i,j;//contador
    int aux;
    printf("escriba la cantidad de ciudades: \n");
    scanf("%d",&n);
    int ciudad[n],nhabitante1999[n],nhabitante2005[n],promedio[n];//adjunta tamaño de vector con numero n ingresado
    for (i=0;i<=n;i++){
    ciudad[i]=i;//definir numero de ciudades
    printf("escriba numero de habitantes en 1999 en la ciudad numero %d \n",ciudad[i]);
    scanf("%d",&nhabitante1999[i]);
    printf("escriba numero de habitantes en 2005 en la ciudad numero %d \n",ciudad[i]);
    scanf("%d",&nhabitante2005[i]);
    }
    for (i=0;i<n;i++){
    promedio[i]=(nhabitante1999[i]+nhabitante2005[i])/2;
    printf("el promedio de la ciudad %d es %d\n",i,promedio[i]);
    }
    //for de prueba sin orden

    for (i=0;i<n;i++){

        printf("prueba sin orden: %d \n",promedio[i]);

    }
   for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){

            if(promedio[j]<promedio[j+1]){
                aux = promedio[j];
                promedio[j]=promedio[j+1];
                promedio [j+1]= aux;}

            }}

//for de prueba con orden

  for (i=0;i<n;i++){

        printf("prueba con orden: %d \n",promedio[i]);

    }
printf ("la ciudad con menor promedio tiene: %d \n",promedio[n-1]);

return 0;
}
