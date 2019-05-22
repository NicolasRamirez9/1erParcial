#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
#include "validaciones.h"

int informeA(Orquesta *eOrquesta, int cant, int posLibre)
{
    int i;

    for(i=0; i<cant; i++)
    {
        getDireccion(eOrquesta[posLibre].lugar,
                     "\n Ingrese lugar de las listas que desee ver: ",
                     "\n Error, vuelva a intentar.",
                     1,
                     3,
                     1);

        if(eOrquesta[posLibre].lugar == eOrquesta[i].lugar)
        {
            printf("\n ID de la orquesta: %d", eOrquesta[i].idOrquesta);
            printf("\n Nombre de la orquesta: %s", eOrquesta[i].nombreOrquesta);
            printf("\n Tipo de orquesta: %d", eOrquesta[i].tipoOrquesta);
            printf("\n Lugar de la orquesta: %s \n", eOrquesta[i].lugar);
        }
    }
}

int informeB(Musico *eMusico, int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {

    }
}

//int informeC(Orquesta *eOrquesta, int cant)
//{
  //  int i;

    //for(i=0; i<cant; i++)
   // {

//    }
//}
