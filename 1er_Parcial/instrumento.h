#ifndef INSTRUMENTO_H_INCLUDED
#define INSTRUMENTO_H_INCLUDED

typedef struct
{
    int idInstrumento;
    int isEmpty;
    char nombreInstrumento[51];
    int tipoInstrumento;

}Instrumento;

/**\brief recorre el array
 *\param inicializa el array en VACIO
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int inicializarInstrumento(Instrumento *eInstrumento, int cant);

/**\brief recorre el array
 *\param busca VACIO y devuelve la posicion de ese VACIO
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int buscarElVacioInstrumento(Instrumento *eInstrumento, int cant, int *indice);

/**\brief ingreso de los campos
 *\param validacion de los campos
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int altaInstrumento(Instrumento *eInstrumento, int cant, int posLibre);

/**\brief ingresa un id
 *\param lo busca y devuelva la posicion donde se encuentra
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int buscarIdInstrumento(Instrumento *eInstrumento, int cant, int *idEncontrado);

/**\brief recorre el array de instrumentos
 *\param y los muestra
 * \return void
 */
int imprimirInstrumentos(Instrumento *eInstrumento,int cant);


#endif // INSTRUMENTO_H_INCLUDED
