#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Pfinal, pulsos; //********************* punto y coma de mas arreglado
    char categoria[12];
    int r,i; //***************** modificado r como entero y agregado i para contador de for
    //--------------------------------------------------------------------------//
    /*printf("Hola, gracias por usar nuestro servicio de telefonia.");
    printf("contamos con 3 tipos de abonos que cada uno tiene mas o menos cantidades de pulsos y su respectiva tarifa\n");
    //--------------------------------------------------------------------------//
    printf("\nEl primero seria, Particular:\n");
    printf("Este abono tiene 4 niveles de pulsos con un importe inicial de 30 pesos anual\n");
    printf("De 0 a 200 pulsos se le cobrara 0.05 por cada uno\n");
    printf("De 201 a 400 pulso se le cobrara 0.07 por cada uno\n");
    printf("De 401 a 1000 pulso se le cobrara 0.1 por cada uno\n");
    printf("Y si son mas de 1000 pulso se le cobrara 0.12 por cada uno\n");
    //--------------------------------------------------------------------------//
    printf("\nEl segundo seria, Profecional:\n");
    printf("Este abono tiene 4 niveles de pulsos con un importe inicial de 50 pesos anual\n");
    printf("De 0 a 250 pulsos se le cobrara 0.07 por cada uno\n");
    printf("De 251 a 500 pulso se le cobrara 0.11 por cada uno\n");
    printf("De 501 a 1000 pulso se le cobrara 0.13 por cada uno\n");
    printf("Y si son mas de 1000 pulso se le cobrara 0.15 por cada uno\n");
    //--------------------------------------------------------------------------//
    printf("\nEl tercero seria, Comercial:\n");
    printf("Este abono tiene 4 niveles de pulsos con un importe inicial de 70 pesos anual\n");
    printf("De 0 a 300 pulsos se le cobrara 0.09 por cada uno\n");
    printf("De 301 a 600 pulso se le cobrara 0.12 por cada uno\n");
    printf("De 601 a 1000 pulso se le cobrara 0.15 por cada uno\n");
    printf("Y si son mas de 1000 pulso se le cobrara 0.17 por cada uno\n");*/
    //--------------------------------------------------------------------------//
    printf("\nAhora puede elegir uno, escribiendolo a continuacion\n");
    scanf("%s", &categoria);
    //--------------------------------------------------------------------------//
    printf("\nPerfecto ahora ingrese cuantos pulsos quiere\n");
    scanf("%g", &pulsos);
    //--------------------------------------------------------------------------//
    //Aca se evalua si categoria es igual a algun nombre de los tipos de abono y si es asi se le asgina un numero y tambien se verifica si esta escrito en minuscula o mayuscula
    //if (categoria[0] == 'P' && categoria[1] == 'a' && categoria[2] == 'r' && categoria[3] == 't' && categoria[4] == 'i' && categoria[5] == 'c' && categoria[6] == 'u' && categoria[7] == 'l' && categoria[8] == 'a' && categoria[9] == 'r' && categoria[10] == '\0')// opcion tosca y fea de usar un vector
   for ( i = 0; categoria[i] != '\0' && categoria[i] == "Particular"[i]; i++) {} //forma correcta de usar un vector:compara la cadena de caracteres,caracter por caracter en cada posicion,cuando finalice va a dar /0 caracter nulo que significa fin de la cadena,ahi se rompe el bucle
    if (categoria[i] == '\0' && "Particular"[i] == '\0') {//si el caracter nulo esta en la misma posicion al final de la cadena se cumple la condicion
    //if (categoria[0]== 'Particular'){ ****************************correccion
        r = 1;

    }
    else
        if (categoria == 'particular'){
        r = 1;

    }
    else if (categoria == 'Profesional'){
        r = 2;
    }else if (categoria == 'profesional'){
        r = 2;
    }else if (categoria == 'Comercial'){
        r = 3;
    }else
        r = 3;
    //--------------------------------------------------------------------------//
    //Aca empieza el switch para evaluar primero cuantos pulsos quiere el usuario y segundo por cual tarifa se multiplica esa cantidad de pulsos
    switch(r){
    case 1:
        if (pulsos <= 200){
            Pfinal = 30 + (pulsos*0.05);
        }else if (pulsos <= 400){
            Pfinal = 30 + (pulsos*0.07);
        }else if (pulsos <= 1000){
            Pfinal = 30 + (pulsos*0.1);
        }else if (pulsos > 1000){
            Pfinal = 30 + (pulsos*0.12);
        }
        break;
    case 2:
        if (pulsos <= 250){
            Pfinal = 50 + (pulsos*0.07);
        }else if (pulsos <= 500){
            Pfinal = 50 + (pulsos*0.11);
        }else if (pulsos <= 1000){
            Pfinal = 50 + (pulsos*0.12);
        }else if (pulsos > 1000){
            Pfinal = 50 + (pulsos*0.15);
        }
        break;
    case 3:
        if (pulsos <= 300){
            Pfinal = 70 + (pulsos*0.09);
        }else if (pulsos <= 500){
            Pfinal = 70 + (pulsos*0.12);
        }else if (pulsos <= 1000){
            Pfinal = 70 + (pulsos*0.15);
        }else if (pulsos > 1000){
            Pfinal = 70 + (pulsos*0.17);
        }
        break;
}
    //--------------------------------------------------------------------------//
    //Por ultimo se imprimen los valores
    printf("\nEntonces usted quiere el abono %s con %g pulsos\n", categoria, pulsos);
    printf("Esto le estaria quedando en un total de %.2f pesos", Pfinal);
    printf("\nMuchas gracias por comprar nuestro servicio");
    return 0;
}

