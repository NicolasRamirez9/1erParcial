#ifndef MUSICO_H_INCLUDED
#define MUSICO_H_INCLUDED
#include "orquesta.h"


typedef struct
{
    int isEmpty;
    char nombre[1001];
    char apellido[1001];
    int edad;
    int idOrquesta;
    int idInstrumento;

}Musico;

#endif // MUSICO_H_INCLUDED
