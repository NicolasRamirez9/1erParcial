#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
#include "validaciones.h"
#define CANTIDAD_ORQUESTA 51
#define CANTIDAD_MUSICO 1001
#define CANTIDAD_INSTRUMENTO 21
#define VACIO -1
#define LLENO 1

int funcionMenu(void)
{
    int opcion;
    char seguir;
    int posLibre1;
    int posLibre2;
    int posLibre3;
    int flag1=0;
    int flag2=0;
    int flag3=0;

    Orquesta eOrquesta[CANTIDAD_ORQUESTA];
    Musico eMusico[CANTIDAD_MUSICO];
    Instrumento eInstrumento[CANTIDAD_INSTRUMENTO];
}
