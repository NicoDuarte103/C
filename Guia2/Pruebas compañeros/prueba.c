#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    int Pfinal, pulsos;
    char categoria[12];
    int r;
    printf("\nAhora puede elegir uno, escribiendolo a continuacion\n");
    scanf(" %s", &categoria);
   //if (categoria[0] == 'P' && categoria[1] == 'a' && categoria[2] == 'r' && categoria[3] == 't' && categoria[4] == 'i' && categoria[5] == 'c' && categoria[6] == 'u' && categoria[7] == 'l' && categoria[8] == 'a' && categoria[9] == 'r' && categoria[10] == '\0')// opcion tosca y fea de usar un vector
   for ( i = 0; categoria[i] != '\0' && categoria[i] == "Particular"[i]; i++) {} //forma correcta de usar un vector:compara la cadena de caracteres,caracter por caracter en cada posicion,cuando finalice va a dar /0 caracter nulo que significa fin de la cadena,ahi se rompe el bucle
    if (categoria[i] == '\0' && "Particular"[i] == '\0') {//si el caracter nulo esta en la misma posicion al final de la cadena se cumple la condicion
    //if (categoria[0]== 'Particular'){ ***correccion
        r = 1;
        printf("hola");
    }
    else
        if (categoria == 'particular'){
        r = 1;
        printf("Hola2",r);
    }
    else
        if (categoria == 'Profesional'){
        r = 2;
    }
    else
        if (categoria == 'profesional'){
        r = 2;
    }
    else
        if (categoria == 'Comercial'){
        r = 3;
    }
    else
        r = 3;
    printf("Seleccione el numero de pulsos \n")
    //--------------------------------------------------------------------------//
    //Aca empieza el switch para evaluar primero cuantos pulsos quiere el usuario y segundo por cual tarifa se multiplica esa cantidad de pulsos
    switch(r){
    case 1:
        if (pulsos <= 200){
            Pfinal = 30 + (pulsos*0.05);
            printf("%f",Pfinal);//cambiado pulsos por Pfinal ***************
        }else if (pulsos <= 400){
            Pfinal = 30 + (pulsos*0.07); //agregados printf para que de valores en pantalla ************
            printf("%f",Pfinal);
        }else if (pulsos <= 1000){
            Pfinal = 30 + (pulsos*0.1);
            printf("%f",Pfinal);
        }else if (pulsos > 1000){
            Pfinal = 30 + (pulsos*0.12);
            printf("%f",Pfinal);
        }
        break;
     case 2:
        if (pulsos <= 250){
            Pfinal = 50 + (pulsos*0.07);
            printf("%f",Pfinal);
        }else if (pulsos <= 500){
            Pfinal = 50 + (pulsos*0.11);
            printf("%f",Pfinal);
        }else if (pulsos <= 1000){
            Pfinal = 50 + (pulsos*0.12);
            printf("%f",Pfinal);
        }else if (pulsos > 1000){
            Pfinal = 50 + (pulsos*0.15);
            printf("%f",Pfinal);
        }
        break;
    case 3:
        if (pulsos <= 300){
            Pfinal = 70 + (pulsos*0.09);
            printf("%f",Pfinal);
        }else if (pulsos <= 500){
            Pfinal = 70 + (pulsos*0.12);
            printf("%f",Pfinal);
        }else if (pulsos <= 1000){
            Pfinal = 70 + (pulsos*0.15);
            printf("%f",Pfinal);
        }else if (pulsos > 1000){
            Pfinal = 70 + (pulsos*0.17);
            printf("%f",Pfinal);
        }
        break;
}
    //--------------------------------------------------------------------------//
    //Por ultimo se imprimen los valores
    printf("\nEntonces usted quiere el abono %s con %f pulsos\n", categoria, pulsos);
    printf("Esto le estaria quedando en un total de %.2f pesos", Pfinal);
    printf("\nMuchas gracias por comprar nuestro servicio");
    return 0;
}


