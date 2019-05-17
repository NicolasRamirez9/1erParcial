#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
#include "validaciones.h"
#define VACIO -1
#define LLENO 1

static int generarId(void)
{
    static int id1=0;
    return id1++;
}

int inicializarInstrumento(Instrumento *eInstrumento, int cant)
{
    int ret;
    int i;
    for(i=0; i<cant; i++)
    {
        eInstrumento[i].isEmpty=VACIO;
        ret=0;
    }
    return ret;
}

int buscarElVacioInstrumento(Instrumento *eInstrumento,int cant,int *indice)
{
    int ret;
    int i;
    for(i=0; i<cant; i++)
    {
        if(eInstrumento[i].isEmpty==VACIO)
        {
            *indice=i;
            ret=0;
            break;
        }
        ret=-1;
    }
    return ret;
}

int altaInstrumento(Instrumento *eInstrumento,int cant,int posLibre)
{
    int ret;
    char tipoIns[50];
    int auxIns;

    if (!getName(eInstrumento[posLibre].nombreInstrumento,"\n Ingrese nombre del instrumento: ","\n Error, vuelva a ingresar\n\n",2,31,1))
    {
        if (!getInt("\n Ingrese tipo de instrumento: ", "\n Error, vuelva a ingresar\n\n", 1, 3, 1, tipoIns))
        {
            auxIns = atoi(tipoIns);
            eInstrumento[posLibre].tipoInstrumento=auxIns;
            eInstrumento[posLibre].idInstrumento=generarId();
            eInstrumento[posLibre].isEmpty=LLENO;
            printf("\n El ID de la orquesta es: %d", generarId());
            ret=0;
        }
    }
    else
    {
        ret=1;
    }
    return ret;
}

int showArrayInt(int* pArray,int len)

{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d\n",pArray[i]);
    }
    return 0;
}
