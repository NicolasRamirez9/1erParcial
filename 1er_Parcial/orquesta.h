#ifndef ORQUESTA_H_INCLUDED
#define ORQUESTA_H_INCLUDED

typedef struct
{
    int id;
    int isEmpty;
    char nombre[51];
    char lugar[51];
    int tipo;

}Orquesta;

static int generarId(void);
int inicializarOrquesta(Orquesta *eOrquesta, int cant);
int buscarElVacio(Orquesta *eOrquesta,int cant,int *indice);
int altaOrquesta(Orquesta *eOrquesta,int cant,int posLibre);
int buscaIdOrquesta(Orquesta *eOrquesta, int cant, int *idEncontrado);
int bajaOrquesta(Orquesta *eOrquesta,int cant);

#endif // ORQUESTA_H_INCLUDED
