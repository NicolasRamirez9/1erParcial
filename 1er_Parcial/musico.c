#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
#include "validaciones.h"
#define VACIO -1
#define LLENO 1

static int generarIdMusico(void)
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

int altaMusico(Musico *eMusico,Orquesta *eOrquesta,Instrumento *eInstrumento,int cant,int posLibre)
{
    int ret;
    char edadMus[50];
    int auxMus;
    char idOrq[50];
    int auxMus;
    char idIns[50];
    int auxIns;

    if (!getName(eMusico[posLibre].nombreMusico,"\n Ingrese nombre del musico: ","\n Error, vuelva a ingresar\n\n",2,51,1))
    {
        if (!getName(eMusico[posLibre].apellidoMusico,"\n Ingrese apellido del musico: ","\n Error, vuelva a ingresar\n\n",2,51,1))
        {
            if (!getInt("\n Ingrese edad del musico: ", "\n Error, vuelva a ingresar\n\n", 1, 3, 1, edadMus))
            {
                auxMus = atoi(edadMus);
                eMusico[posLibre].edad=auxMus;

                if(!buscaIdOrquesta(eOrquesta,cant,&posicion))
                {
                    printf("\n Se encontro ID de Orquesta.");

                    if(!getInt("\n Ingrese el ID de la orquesta: ","\n Error, vuelva a ingresar\n\n",0,20,1,idOrq))
                    {
                        auxOrq=atoi(idOrq);
                        eMusico[posLibre].idOrq=auxOrq;
                    }
                }
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

 if(!buscarElVacioIns(array3,cant,&posicion))
                        {
                            printf("se encontro");
                            if(!getInt("ingrese el id del instrumento: ","\nerror,vuelva a intentar",0,20,1,idIns))
                            {
                                auxIns=atoi(idIns);
                                array[posLibre].idIns=auxIns;
                                array[posLibre].id=generarIdM();
                                array[posLibre].isEmpty=LLENO;
                                ret=0;

                            }
                        }


                    }
                }
            }
        }
    }

    else
    {
        ret=1;
    }
    return ret;
}
int buscaIdMusico (Musico *array, int cant, int *idEncontrado)
{
    int i;
    int retorno = -1;
    Musico auxMus;
    printf("\ningrese id de musico a buscar: ");
    scanf("%d", &auxMus.id);
    for(i=0; i < cant; i++)
    {
        if (array[i].id == auxMus.id)
        {
            retorno=0;
            *idEncontrado=i;
            break;
        }
    }
    return retorno;
}
int modificacionMusico(Musico *array,Orquesta *array2,int cant)
{
    int aceptar;
    char modificacion;
    int ret=-1;
    int posId2;
    int i;
    int posPrueba=0;
    int posicion;

    char idAut[50];
    int auxAut;
    char edad[10];
    int auxEdad;

    for(i=0; i<cant; i++)
    {
        if(array[i].isEmpty!=VACIO)
        {
            printf("nombre:%s apellido:%s id:%d\n",array[i].nombre,array[i].apellido,array[i].id);
        }
    }
    if(!buscaIdMusico(array,cant,&posId2))
    {
        do
        {
            system("clear");
            printf("------------------\n");
            printf("- 1) EDAD           -\n");
            printf("- 2) ID DE ORQUESTA -\n");
            printf("------------------\n");
            printf("ingrese el campo a modificar: ");
            scanf("%d",&aceptar);
            system("clear");
            switch(aceptar)
            {
            case 1:
                getInt("ingrese edad: ","\nerror,vuelva a intentar",1,50,1,edad);
                auxEdad=atoi(edad);
                array[posPrueba].edad=auxEdad;
                break;
            case 2:
                    if(!buscaIdOrquesta(array2,cant,&posicion))
                    {
                        getInt("modifique el id de la orquesta: ","\nerror,vuelva a intentar",0,20,1,idAut);
                        auxAut=atoi(idAut);
                        array[posPrueba].idOrq=auxAut;
                    }
                break;
            }
            printf("\nquiere modificar otro campo?\ns/para continuar n/para salir\n");
            scanf("%s",&modificacion);
            system("clear");
        }
        while(modificacion=='s');
        ret=0;
    }
    else
    {
        printf("no se encontro id");
    }
    return ret;
}

int bajaMusico(Musico *array,int cant)
{
    int posId1;
    char resp;
    int posBaja=0;
    int i;

    for(i=0; i<cant; i++)
    {
        if(array[i].isEmpty!=VACIO)
        {
            printf("nombre:%s apellido:%s id:%d\n",array[i].nombre,array[i].apellido,array[i].id);
        }
    }
    if(!buscaIdMusico(array,cant,&posId1))
    {
        printf("esta seguro que quiere dar de baja ese id: \n s|n: ");
        scanf("%s",&resp);
        if(resp=='s')
        {
            printf("se ah dado de baja esta Orquesta");
            array[posBaja].isEmpty=VACIO;
        }
        else
        {
            printf("vuelva al menu");
        }
    }
    return 0;
}
void imprimirMusico(Musico *array, Instrumento *array2 ,int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(array[i].isEmpty!=VACIO && array2[i].isEmpty!= VACIO)
        {
            printf("nombre:%s apellido:%s id:%d nombre:%s tipo:%d\n",array[i].nombre,array[i].apellido,array[i].id,array2[i].nombre,array2[i].tipo);
        }
    }
}
