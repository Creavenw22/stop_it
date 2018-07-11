#include"Parser.h"
#include<string.h>
int parserRead(ArrayList* this)
{
    char numero[5];
    char nombre[50];
    char par[2];
    char impar[2];
    char primo[2];

    int auxPar,auxImpar,auxPrimo;

    numeroNatural* aux;
    int leidos;
    if(this!=NULL)
    {
        FILE* pFile;
        pFile=fopen("datos.csv","r");
        if(pFile!=NULL)
        {
            do
            {
                leidos=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^,\n]\n",numero,nombre,par,impar,primo);
                if(leidos==5)
                {
                    aux=constructor();
                    if(aux!=NULL)
                    {
                        set_numero(aux,atoi(numero));
                        set_name(aux,nombre);

                        auxPar=isPar(aux);
                        auxImpar=isImpar(aux);
                        auxPrimo=isPrimo(aux);

                        set_par(aux,auxPar);
                        set_impar(aux,auxImpar);
                        set_primo(aux,auxPrimo);
                        this->add(this,aux);
                    }
                }
            }
            while(!feof(pFile));
            printf("\nArchivo leido con exito\n");
            system("cls");
        }
        else
        {
            printf("\nArchivo no encontrado\n");
            system("cls");
        }
        fclose(pFile);
    }
}

int parserWrite(ArrayList* this)
{
    int i;
    numeroNatural* aux;
    FILE* pFile;
    pFile=fopen("info.csv","w");
    if(pFile!=NULL&&this!=NULL)
    {
        for(i=0; i<al_len(this); i++)
        {
            aux=this->get(this,i);
            if(aux!=NULL)
            {
                fprintf(pFile,"%d,%s,%d,%d,%d\n",get_numero(aux),get_nombre(aux),get_par(aux),get_impar(aux),get_primo(aux));
            }
        }
        printf("\nArchivo guardado con exito\n ");
    }
    fclose(pFile);
}
