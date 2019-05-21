#ifndef MUSICO_H_INCLUDED
#define MUSICO_H_INCLUDED
#include "instrumento.h"

typedef struct
{
    int idMusico;
    int isEmpty;
    char nombreMusico[51];
    char apellidoMusico[51];
    int edad;
    int idOrquesta;
    int idInstrumento;

}Musico;

/**\brief recorre el array
 *\param inicializa el array en VACIO
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int inicializarMusico(Musico *eMusico, int cant);

/**\brief recorre el array
 *\param inicializa el array en VACIO
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int buscarElVacioMusico(Musico *eMusico, int cant, int *indice);

/**\brief ingreso de los campos
 *\param validacion de los campos
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int altaMusico(Musico *eMusico, Orquesta *eOrquesta, Instrumento *eInstrumento, int cant, int posLibre);

/**\brief ingresa un id
 *\param lo busca y devuelva la posicion donde se encuentra
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int buscarIdMusico (Musico *eMusico, int cant, int *idEncontrado);

/**\brief se ingresa id para modificar los campos
 *\param si el id es correcto se modifican y si no sale del programa
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int modificarMusico(Musico *eMusico, Orquesta *eOrquesta, int cant);

/**\brief se ingresa id para dar de baja a un musico
 *\param si el id es correcto se da de baja y si no sale del programa
 * \return retorna 0
 */
int bajaMusico(Musico *eMusico, int cant);

/**\brief se ingresa id para dar de baja a la orquesta y sus musicos
 *\param si el id es correcto se da de baja y si no sale del programa
 * \return retorna 0
 */
int bajaOrquesta(Orquesta *eOrquesta, Musico *eMusico, int cantUno, int cantDos);

/**\brief recorre el array de musicos
 *\param y los muestra
 * \return void
 */
void imprimirMusico(Musico *eMusico, Instrumento *eInstrumento,int cantUno, int cantDos);

#endif // MUSICO_H_INCLUDED
