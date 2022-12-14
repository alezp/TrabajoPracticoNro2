/*=====[Module Name]===========================================================

 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2022/10/07
 */
 
/*=====[Inclusion of own header]=============================================*/
//#include <stddef.h>
//#include <alumnos.h>
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/
//type_def alumno alum;

/*=====[Definitions of private global variables]=============================*/
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

void Nombre(struct * const Alumno) 
{
    const struct alumno_s alumno = {
        .apellidos = "Polli",
        .nombres = "Alejandro Miguel",
        .documento = "34.764.110",
    };

}

/*=====[Implementations of interrupt functions]==============================*/

/*=====[Implementations of private functions]================================*/
