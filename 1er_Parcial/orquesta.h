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

/**\brief recorre el array
 *\param inicializa el array en VACIO
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int inicializarOrquesta(Orquesta *eOrquesta, int cant);

/**\brief recorre el array
 *\param busca VACIO y devuelve la posicion de ese VACIO
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int buscarElVacioOrquesta(Orquesta *eOrquesta,int cant,int *indice);

/**\brief ingreso de los campos
 *\param validacion de los campos
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int altaOrquesta(Orquesta *eOrquesta,int cant,int posLibre);

/**\brief ingresa un id
 *\param lo busca y devuelva la posicion donde se encuentra
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int buscarIdOrquesta(Orquesta *eOrquesta, int cant, int *idEncontrado);

/**\brief recorre el array de orquestas
 *\param y los muestra
 * \return void
 */
void imprimirOrquestas(Orquesta *eOrquesta, int cant);

#endif // ORQUESTA_H_INCLUDED
