/*=====[Module Name]===========================================================
 * Copyright 2022Alejandro Miguel POLLi <alepolli5@hotmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2022/10/01
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

/*=====[Implementations of private functions]================================*/

int main(int argc, char *argv[]) {

    char cadena[128];

    if (AlejandroPolli(cadena, sizeof(cadena))) {
        printf("%s\r\n", cadena);
          } else {
        printf("Error, la cadena es muy corta");
    }

    return 0;
   
}
