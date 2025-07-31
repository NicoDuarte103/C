#include <stdio.h>
#include <stdlib.h>

int main (){

char nombre[30];
int libreta;
int nota1,nota2,nota3;
float promedio;

printf("escriba el nombre del alumno:\n");
scanf ("%s",&nombre);
printf("escriba el numero de libreta del alumno:\n");
scanf ("%d",&libreta);
printf("escriba la primera nota del alumno:\n");
scanf ("%d",&nota1);
printf("escriba la segunda nota del alumno:\n");
scanf ("%d",&nota2);
printf("escriba la tercer nota del alumno:\n");
scanf ("%d",&nota3);

promedio = (nota1+nota2+nota3)/3;

if (promedio >= 9){
    printf("el alumno %s con numero de libreta %d es SOBRESALIENTE",nombre,libreta);}
    else if (promedio >= 6){
            printf("el alumno %s con numero de libreta %d esta APROBADO",nombre,libreta);}
            else {
                printf("el alumno %s con numero de libreta %d esta DESAPROBADO",nombre,libreta);
            }


return 0;
}
