#ifndef MUSICO_H_INCLUDED
#define MUSICO_H_INCLUDED
#include "instrumento.h"


typedef struct
{
    int idMusico;
    int isEmpty;
    char nombreMusico[51];
    char apellidoMusico[51];
    int edad;
    int idOrquesta;
    int idInstrumento;

}Musico;

int inicializarMusico(Musico *eMusico, int cant);
int buscarElVacioMusico(Musico *eMusico, int cant, int *indice);
int altaMusico(Musico *eMusico, Orquesta *eOrquesta, Instrumento *eInstrumento, int cant, int posLibre);
int buscarIdMusico (Musico *eMusico, int cant, int *idEncontrado);
int modificarMusico(Musico *eMusico, Orquesta *eOrquesta, int cant);
int bajaMusico(Musico *eMusico, int cant);
void imprimirMusico(Musico *eMusico, Instrumento *eInstrumento,int cantUno, int cantDos);

#endif // MUSICO_H_INCLUDED
