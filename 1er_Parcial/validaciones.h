#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED

/**\brief toma por teclado lo que ingrese el usuario
 *\param valida
 * \return retorna 0 si dio bien o -1 si dio mal
 */
int getString(char *msg,char *msgError,int minimo,int maximo,int reintentos,char *resultado);

/**\brief valida que sea letra
 * \return retorna 0 si dio bien o 1 si dio mal
 */
int isValidName(char *cadena);

/**\brief valida
 *\param llama a getString y isValidName y si dieron bien copia el resultado
 * \return retorna 0 dio bien o -1 si dio mal
 */
int getName(char *resultado,char *msg,char *msgError,int minimo,int maximo,int reintentos);

/**\brief valida que sea numero
 * \return retorna 0 si dio bien o 1 si dio mal
 */
int isValidint(char* cadena);

/**\brief valida
 *\param llama a getString y isValidFloat y si dieron bien copia el resultado
 * \return retorna 0 dio bien o -1 si dio mal
 */
int getInt(char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos, char *resultado);

/**\brief valida que sea un numero y letra
 * \return retorna 0 si dio bien o 1 si dio mal
 */
int isValidDireccion(char *cadena);

/**\brief valida
 *\param llama a getString y isValidDireccion y si dieron bien copia el resultado
 * \return retorna 0 dio bien o -1 si dio mal
 */
int getDireccion(char *resultado,char *msg,char *msgError,int minimo,int maximo,int reintentos);

#endif // VALIDACIONES_H_INCLUDED
