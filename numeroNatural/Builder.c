#include "Builder.h"
#include<stdio.h>
numeroNatural* constructor()
{
    numeroNatural* aux;
    aux=(numeroNatural*)malloc(sizeof(numeroNatural));
    return aux;
}

void set_numero(numeroNatural* this, int numero)
{
    this->numero=numero;
}

void set_name(numeroNatural* this, char name[])
{
    strcpy(this->nombre,name);
}

void set_par(numeroNatural* this, int par)
{
    this->par=par;
}

void set_impar(numeroNatural* this, int impar)
{
    this->impar=impar;
}

void set_primo(numeroNatural* this, int primo)
{
    this->primo=primo;
}



int get_numero(numeroNatural* this)
{
    return this->numero;
}

char* get_nombre(numeroNatural* this)
{
    return this->nombre;
}

int get_par(numeroNatural* this)
{
    return this->par;
}

int get_impar(numeroNatural* this)
{
    return this->impar;
}

int get_primo(numeroNatural* this)
{
    return this->primo;
}

void printAll(ArrayList* this)
{
    int i;
    int len=this->len(this);
    numeroNatural* aux;
    printf("\nid\tnumero\tNombre\t\t\tpar\timpar\tprimo");
    for(i=0;i<50;i++)
    {


        aux=this->get(this,i);
        if(aux!=NULL)
        {
            printf("\n%d\t",i);
            printOne(aux);
        }
    }
    printf("\n\n");
    system("pause");
    for(i=0;i<len;i++)
    {


        aux=this->get(this,i);
        if(aux!=NULL)
        {
            printf("\n%d\t",i);
            printOne(aux);
        }
    }

}
void printOne(numeroNatural* this)
{
    printf("%d\t%s",get_numero(this),get_nombre(this));
    if(strlen(get_nombre(this))<16)
    {
        printf("\t");
    }
    if(strlen(get_nombre(this))<8)
    {
        printf("\t");
    }

    if(get_par(this)==0)
    {
        printf("\tNO");
    }
    else if(get_par(this)==1)
    {
        printf("\tSI");
    }

    if(get_impar(this)==0)
    {
        printf("\tNO");
    }
    else if(get_impar(this)==1)
    {
        printf("\tSI");
    }

    if(get_primo(this)==0)
    {
        printf("\tNO");
    }
    else if(get_primo(this)==1)
    {
        printf("\tSI");
    }

}

int isPar(numeroNatural* this)
{
    int auxReturn=0;
    int num= get_numero(this);
    if(num%2==0)
    {
        auxReturn=1;
    }

    return auxReturn;
}

int isImpar(numeroNatural* this)
{
    int auxReturn=0;
    int num=get_numero(this);
    if(num%2==1)
    {
        auxReturn=1;
    }

    return auxReturn;
}

int isPrimo(numeroNatural* this)
{
    int auxReturn=0;
    int num= get_numero(this);
    if(num==0||num==2 ||num==3 ||num==5 ||num==7 ||num==11||num== 13 ||num==17 ||num==19 ||num==23 ||num==29
||num==31 ||num==37 ||num==41 ||num==43 ||num==47 ||num==53 ||num==59 ||num==61 ||num==67 ||num==71
||num==73 ||num==79 ||num==83 ||num==89 ||num==97 ||num==101 ||num==103 ||num==107 ||num==109 ||num==113
||num==127 ||num==131 ||num==137 ||num==139 ||num==149 ||num==151 ||num==157 ||num==163 ||num==167 ||num==173
||num==179 ||num==181 ||num==191 ||num==193 ||num==197 ||num==199 ||num==211 ||num==223 ||num==227 ||num==229
||num==233 ||num==239 ||num==241 ||num==251 ||num==257 ||num==263 ||num==269 ||num==271 ||num==277 ||num==281
||num==283 ||num==293 ||num==307 ||num==311 ||num==313 ||num==317 ||num==331 ||num==337 ||num==347 ||num==349
||num==353 ||num==359 ||num==367 ||num==373 ||num==379 ||num==383 ||num==389 ||num==397 ||num==401 ||num==409
||num==419 ||num==421 ||num==431 ||num==433 ||num==439 ||num==443 ||num==449 ||num==457 ||num==461 ||num==463
||num==467 ||num==479 ||num==487 ||num==491 ||num==499)
    {
        auxReturn=1;
    }

    return auxReturn;
}

/*int funcionQueFiltra(void* elemento)
{
    if(get_edad((numeroNatural*)elemento)>30&&strcmp(get_profesion((numeroNatural*)elemento),"programador")==0)
    {
        return 1;
    }
}*/
