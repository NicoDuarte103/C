#include <stdio.h>
#include <stdlib.h>
int main (){
printf("\t \t PROGRAMA SELECTOR DE ABONOS DE TELEFONIA\n");
double tarifa; // usada para ecuacion de tarifa segun el caso
int abonado; // seleccion de tipo de abonado
int pulso; //seleccion de numero de pulsos
// variables de entrada y salida
printf("Ingrese el numero correspondiente al abono que busca:\n");
printf(" 1 = Abono Particular \t");
printf(" 2 = Abono Residencial \t");
printf(" 3 = Abono Comercial \n");
printf("\t\t  --------------------------------\n");
printf("\t\t |                                |\n");
printf("\t\t |                                |\n");
printf("\t\t |                                |\n");
printf("\t\t  --------------------------------\n\n\n\n\n");

printf("\033[6;34H"); //  Mover el cursor a la fila 6, columna 10 en la pantalla de texto
fflush (stdin);
scanf ("%d",&abonado);
fflush (stdin);
printf("\033[11;10H");
printf("seleccione la cantidad de pulsos que uso el abonado:\n");
fflush (stdin);
system ("cls");
printf("\t\t  --------------------------------\n");
printf("\t\t |                                |\n");
printf("\t\t |                                |\n");
printf("\t\t |                                |\n");
printf("\t\t  --------------------------------\n");
printf("\033[14;34H");
scanf ("%d",&pulso);
fflush (stdin);
printf("\033[17;18H");
//seleccionador de tipo de abonado,particular,residencial o comercial
switch (abonado){
    case 1:
        printf("Ha seleccionado abonado particular\n");
         switch(pulso){ //switch anidado
            case 0 ... 200: //establece rango entre 0 y 200,para eso son los ... similara if x>= && x <= 200

            tarifa = 30+(0.05*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa); //variable double mas exacta que float
            break;

            case 201 ... 400:
            tarifa = 30+(0.07*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

            case 401 ... 1000:
            tarifa = 30+(0.1*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

            default:
            tarifa = 30+(0.12*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

         }
        break;
    case 2:
        printf("Ha seleccionado abonado profesional \n");
        switch(pulso){
            case 0 ... 250:
            tarifa = 50+(0.07*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);;
            break;

            case 251 ... 500:
            tarifa = 50+(0.11*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

            case 501 ... 1000:
            tarifa = 50+(0.13*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

            default:
            tarifa = 50+(0.15*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;
        }
        break;
    case 3:
        printf("Ha seleccionado abonado comercial \n");
        switch(pulso){
            case 0 ... 300:
            tarifa = 70+(0.09*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

            case 301 ... 600:
            tarifa = 70+(0.12*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

            case 601 ... 1000:
            tarifa = 70+(0.15*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;

            default:
            tarifa = 70+(0.17*pulso);
            printf("\t\t La tarifa de este abondado es $ %g",tarifa);
            break;
        }
        break;
    default:
        printf("ERROR abonado ingresado inexistente");
        system("pause");

}
return 0;
}
