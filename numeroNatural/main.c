#include <stdio.h>
#include <stdlib.h>
#include "Parser.h"

int getInt(char mensaje[], int enteroIngresado, int maximo, int minimo);

int main()
{
    ArrayList* numeros;
    numeros=al_newArrayList();
    int opcion;
    char respuesta='s';
    numeroNatural* aux;

    printf("\n---Lista de Numeros---\n");
    parserRead(numeros);
    printAll(numeros);
    parserWrite(numeros);

    printf("\n\n---Presione una tecla para salir---\n");
    system("pause > nul");


    return 0;
}


int getInt(char mensaje[], int enteroIngresado, int maximo, int minimo)
{
    do
    {
        printf("%s",mensaje);
        scanf("%d",&enteroIngresado);
    }
    while(enteroIngresado>maximo||enteroIngresado<minimo);
    return enteroIngresado;
}
