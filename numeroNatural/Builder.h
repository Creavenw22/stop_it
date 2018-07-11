#include"ArrayList.h"
#ifndef numeroNatural_H_INCLUDED
#define numeroNatural_H_INCLUDED

typedef struct
{
    int numero;
    char nombre[50];
    int par;
    int impar;
    int primo;
}numeroNatural;


#endif // numeroNatural_H_INCLUDED
numeroNatural* constructor();

void set_numero(numeroNatural* this, int numero);
void set_name(numeroNatural* this, char name[]);
void set_par(numeroNatural* this, int par);
void set_impar(numeroNatural* this, int impar);
void set_primo(numeroNatural* this, int primo);

int isPar(numeroNatural* this);
int isImpar(numeroNatural* this);
int isPrimo(numeroNatural* this);

int get_numero(numeroNatural* this);
char* get_nombre(numeroNatural* this);
int get_par(numeroNatural* this);
int get_edad(numeroNatural* this);
int get_primo(numeroNatural* this);

void printAll(ArrayList* this);
void printOne(numeroNatural* this);
int funcionQueFiltra(void* elemento);
