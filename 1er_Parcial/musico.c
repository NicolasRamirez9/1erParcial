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

int inicializarMusico(Musico *eMusico, int cant)
{
    int ret;
    int i;
    for(i=0; i<cant; i++)
    {
        eMusico[i].isEmpty=VACIO;
        ret=0;
    }
    return ret;
}

int buscarElVacioMusico(Musico *eMusico,int cant,int *indice)
{
    int ret;
    int i;
    for(i=0; i<cant; i++)
    {
        if(eMusico[i].isEmpty==VACIO)
        {
            *indice=i;
            ret=0;
            break;
        }
        ret=-1;
    }
    return ret;
}

int altaMusico(Musico *eMusico,int cant,int posLibre)
{
    int ret;
    char edadMus[50];
    int auxMus;

    if (!getName(eMusico[posLibre].nombre,"\n Ingrese nombre del musico: ","\n Error, vuelva a ingresar\n\n",2,31,1))
    {
        if (!getName(eMusico[posLibre].apellido,"\n Ingrese apellido del musico: ","\n Error, vuelva a ingresar\n\n",2,31,1))
        {
            if (!getInt("\n Ingrese edad del musico: ", "\n Error, vuelva a ingresar\n\n", 1, 3, 1, edadMus))
            {
                auxMus = atoi(edadMus);
                eMusico[posLibre].edad=auxMus;
                eMusico[posLibre].idOrquesta=generarId();
                eMusico[posLibre].isEmpty=LLENO;
                printf("\n El ID de la orquesta es: ", generarId());
                ret=0;
            }
        }
    }
        else
        {
            ret=1;
        }
        return ret;
}
