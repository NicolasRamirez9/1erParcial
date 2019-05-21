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
    int flagUno = 0;
    int flagDos = 0;
    int flagTres = 0;

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
    eOrquesta[0].tipoOrquesta = LLENO;

    strcpy(eMusico[0].nombreMusico, "nico");
    strcpy(eMusico[0].apellidoMusico, "ramirez");
    eMusico[0].idMusico = 0;
    eMusico[0].isEmpty = LLENO;
    eMusico[0].idInstrumento = 0;

    strcpy(eMusico[LLENO].nombreMusico, "raul");
    strcpy(eMusico[LLENO].apellidoMusico, "dominguez");
    eMusico[LLENO].idMusico = LLENO;
    eMusico[LLENO].isEmpty = LLENO;

    strcpy(eInstrumento[0].nombreInstrumento, "guitarra");
    eInstrumento[0].tipoInstrumento = 2;
    eInstrumento[0].idInstrumento = 0;
    eInstrumento[0].isEmpty = LLENO;

    strcpy(eInstrumento[LLENO].nombreInstrumento, "flauta");
    eInstrumento[LLENO].tipoInstrumento = 2;
    eInstrumento[LLENO].idInstrumento = 0;
    eInstrumento[LLENO].isEmpty = LLENO;
    //**********************************************
    do
    {
        printf(" ***********************************************************   \n");

        printf("\n *                    ORQUESTA                             * \n");

        printf("\n *           1.ALTA             2.BAJA                     * \n");

        printf("\n *                   3.IMPRIMIR                            * \n");

        printf("\n *********************************************************** \n");

        printf("\n *                    MUSICOS                              * \n");

        printf("\n *           4.ALTA         5.MODIFICACION                 * \n");

        printf("\n *           6.BAJA         7.IMPRIMIR                     * \n");

        printf("\n *********************************************************** \n");

        printf("\n *                  INSTRUMENTOS                           * \n");

        printf("\n *           8. ALTA            9.IMPRIMIR                 * \n");

        printf("\n *********************************************************** \n");

        printf("\n Elija una opcion: ");
        scanf("%d", &opcion);
        system("cls");
        ///system("clear");

        switch(opcion)
        {
        case 1:
            if(!buscarElVacioOrquesta(eOrquesta, ORQUESTA, &posLibreOrquesta))
            {
                flagUno = LLENO;
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
            if(flagUno == 0)
            {
                printf("\n No hay datos para dar de baja, se debe cargar la orquesta primero. \n");
            }
            else
            {
                bajaOrquesta(eOrquesta, eMusico, ORQUESTA, MUSICOS);
            }
            break;

        case 3:
            if(flagUno == 0)
            {
                printf("\n No hay datos para modificar, se debe cargar la orquesta primero. \n");
            }
            else
            {
                imprimirOrquestas(eOrquesta, ORQUESTA);
            }
            break;

        case 4:
            if(flagDos != 0 && flagUno != 0)
            {
                if(!buscarElVacioMusico(eMusico, MUSICOS, &posLibreMusico))
                {
                    flagTres = LLENO;
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
            }
            else
            {
                printf("\n Primero se debe ingresar la orquesta y instrumento. \n");
            }
            break;

        case 5:
            if(flagTres == 0)
            {
                printf("\n No hay datos para modificar, se debe cargar el musico primero. \n");
            }
            else
            {
                modificarMusico(eMusico, eOrquesta, MUSICOS);
            }
            break;

        case 6:
            if(flagTres == 0)
            {
                printf("\n No hay datos para dar de baja, se debe cargar el musico primero. \n");
            }
            else
            {
                bajaMusico(eMusico, MUSICOS);
            }
            break;

    inicializarOrquesta(eOrquesta, ORQUESTA);
        case 7:
            if(flagTres == 0)
            {
                printf("\n No hay datos para imprimir por pantalla, se debe cargar el musico primero. \n");
            }
            else
            {
                imprimirMusico(eMusico, eInstrumento, MUSICOS, INSTRUMENTO);
            }
            break;

        case 8:
            if(!buscarElVacioInstrumento(eInstrumento, INSTRUMENTO, &posLibreInstrumento))
            {
                flagDos = LLENO;
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
            if(flagDos == 0)
            {
                printf("\n No hay datos para imprimir por pantalla, se debe cargar el instrumento primero. \n");
            }
            else
            {
                imprimirInstrumentos(eInstrumento, INSTRUMENTO);
            }
            break;

        }
        printf("\n Quiere volver al menu?\n s/para continuar n/para salir: ");
        scanf("%s", &seguir);
        system("cls"); ///system("clear");
    }
    while(seguir =='s');
    return 0;
}
