#ifndef MUSICO_H_INCLUDED
#define MUSICO_H_INCLUDED
#include "orquesta.h"


typedef struct
{
    int isEmpty;
    char nombreMusico[51];
    char apellidoMusico[51];
    int edad;
    int idOrquesta;
    int idInstrumento;

}Musico;

static int generarIdMusico(void);
int inicializarMusico(Musico *eMusico, int cant);
int buscarElVacioMusico(Musico *eMusico,int cant,int *indice);
int altaMusico(Musico *eMusico,int cant,int posLibre);

#endif // MUSICO_H_INCLUDED
