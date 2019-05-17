#include <stdio.h>
///#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
#include "validaciones.h"
#define ORQUESTA 50
#define MUSICOS 1000
#define INSTRUMENTO 20
#define LLENO 1
#define VACIO -1

int funcionMenu(void)
{
    int opcion;
    char seguir;
    int posLibreOrquesta;
    int posLibreMusico;
    int posLibreInstrumento;

    Orquesta eOrquesta[ORQUESTA];
    Musico eMusico[MUSICOS];
    Instrumento eInstrumento[INSTRUMENTO];

    inicializarOrquesta(eOrquesta, ORQUESTA);
    inicializarMusico(eMusico, MUSICOS);
    inicializarInstrumento(eInstrumento, INSTRUMENTO);


    //**********************************************
    strcpy(eOrquesta[0].nombreOrquesta, "callejeros");
    strcpy(eOrquesta[0].lugar, "avellaneda");
    eOrquesta[0].idOrquesta = 0;
    eOrquesta[0].isEmpty = LLENO;
    eOrquesta[0].tipoOrquesta = 1;

    strcpy(eMusico[0].nombreMusico, "nico");
    strcpy(eMusico[0].apellidoMusico, "ramirez");
    eMusico[0].idMusico = 0;
    eMusico[0].isEmpty = LLENO;
    eMusico[0].idInstrumento = 0;

    strcpy(eMusico[1].nombreMusico, "raul");
    strcpy(eMusico[1].apellidoMusico, "dominguez");
    eMusico[1].idMusico = 1;
    eMusico[1].isEmpty = LLENO;

    strcpy(eInstrumento[0].nombreInstrumento, "guitarra");
    eInstrumento[0].tipoInstrumento = 2;
    eInstrumento[0].idInstrumento = 0;
    eInstrumento[0].isEmpty = LLENO;

    strcpy(eInstrumento[1].nombreInstrumento, "flauta");
    eInstrumento[1].tipoInstrumento = 2;
    eInstrumento[1].idInstrumento = 0;
    eInstrumento[1].isEmpty = LLENO;
    //**********************************************
    do
    {
        printf(":::::::::::::::::::::::::::::::::\n");
        printf(":          ORQUESTA             :\n");
        printf(": 1) ALTA             2)BAJA    :\n");
        printf(":          3)IMPRIMIR           :\n");
        printf(":          MUSICOS              :\n");
        printf(": 4) ALTA        5)MODIFICACION :\n");
        printf(": 6)BAJA         7)IMPRIMIR     :\n");
        printf(":          INSTRUMENTOS         :\n");
        printf(": 8) ALTA            9)IMPRIMIR :\n");
        printf(":::::::::::::::::::::::::::::::::\n");
        printf("\n Elija una opcion: ");
        scanf("%d", &opcion);
        system("cls");
        ///system("clear");

        switch(opcion)
        {
        case 1:
            if(!buscarElVacioOrquesta(eOrquesta, ORQUESTA, &posLibreOrquesta))
            {
                //  flag1=1;
                switch(altaOrquesta(eOrquesta, ORQUESTA, posLibreOrquesta))
                {
                case 0:
                    printf("\n Dato ingresado correctamente.\n\n");
                    break;

                case 1:
                    printf("\n Dato ingresado incorrectamente.\n\n");
                    break;
                }
            }
            else
            {
                printf("\n Lleno.");
            }
            break;

        case 2:
            bajaOrquesta(eOrquesta, ORQUESTA);
            break;

        case 3:
            imprimirOrquestas(eOrquesta, ORQUESTA);
            break;

        case 4:
            if(!buscarElVacioMusico(eMusico, MUSICOS, &posLibreMusico))
            {
                //   flag1=1;
                switch(altaMusico(eMusico, eOrquesta, eInstrumento, MUSICOS, posLibreMusico))
                {
                case 0:
                    printf("\n Dato ingresado correctamente.\n\n");
                    break;

                case 1:
                    printf("\n Dato ingresado incorrectamente.\n\n");
                    break;
                }
            }
            else
            {
                printf("\n Lleno.");
            }
            break;

        case 5:
            modificarMusico(eMusico, eOrquesta, MUSICOS);
            break;

        case 6:
            bajaMusico(eMusico, MUSICOS);
            break;

        case 7:
            imprimirMusico(eMusico, eInstrumento, MUSICOS, INSTRUMENTO);
            break;

        case 8:
            if(!buscarElVacioInstrumento(eInstrumento, INSTRUMENTO, &posLibreInstrumento))
            {
                //  flag1=1;
                switch(altaInstrumento(eInstrumento, INSTRUMENTO, posLibreInstrumento))
                {
                case 0:
                    printf("\n Dato ingresado correctamente.\n\n");
                    break;

                case 1:
                    printf("\n Dato ingresado incorrectamente.\n\n");
                    break;
                }
            }
            else
            {
                printf("\n Lleno.");
            }
            break;

        case 9:
            imprimirInstrumentos(eInstrumento, INSTRUMENTO);
            break;

        }
        printf("\n Quiere volver al menu?\n s/para continuar n/para salir: ");
        scanf("%s", &seguir);
        system("cls"); ///system("clear");
    }
    while(seguir =='s');
    return 0;
}
