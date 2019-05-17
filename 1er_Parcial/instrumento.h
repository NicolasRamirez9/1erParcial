#ifndef INSTRUMENTO_H_INCLUDED
#define INSTRUMENTO_H_INCLUDED

typedef struct
{
    int idInstrumento;
    int isEmpty;
    char nombreInstrumento[21];
    int tipoInstrumento;

}Instrumento;

static int generarIdInstrumento(void);
int inicializarInstrumento(Instrumento *eInstrumento, int cant);
int buscarElVacioInstrumento(Instrumento *eInstrumento,int cant,int *indice);
int altaInstrumento(Instrumento *eInstrumento,int cant,int posLibre);
int mostrarInstrumentos(Instrumento *eInstrumento,int cant);


#endif // INSTRUMENTO_H_INCLUDED
