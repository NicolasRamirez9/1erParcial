#ifndef ORQUESTA_H_INCLUDED
#define ORQUESTA_H_INCLUDED

typedef struct
{
    int idOrquesta;
    int isEmpty;
    char nombreOrquesta[51];
    char lugar[51];
    int tipoOrquesta;

}Orquesta;

int inicializarOrquesta(Orquesta *eOrquesta, int cant);
int buscarElVacioOrquesta(Orquesta *eOrquesta,int cant,int *indice);
int altaOrquesta(Orquesta *eOrquesta,int cant,int posLibre);
int buscarIdOrquesta(Orquesta *eOrquesta, int cant, int *idEncontrado);
int bajaOrquesta(Orquesta *eOrquesta,int cant);
void imprimirOrquestas(Orquesta *eOrquesta, int cant);

#endif // ORQUESTA_H_INCLUDED
