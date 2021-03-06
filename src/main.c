/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
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
	
	if (KevinMoncayo(cadena, sizeof(cadena))){
	printf("Alumno: %s\r\n", cadena);
	}
	else{
	printf("No se pudo serializar el alumno.\r\n");
	}

    if (JoseMauricioLara(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }


    if (DanielMarquez(cadena, sizeof(cadena)))
    {
	printf("Alumno: %s\r\n", cadena);
    }else {
	printf("No se pudo serializar el alumno\r\n");
    }


    if (FedericoPacher(cadena, sizeof(cadena))){
	printf("Alumno: %s\r\n", cadena);
    }else {
	printf("No se pudo serializar el alumno\r\n");
    }

    if(FelipeSarche(cadena, sizeof(cadena)))
    {
        printf("Alumno: %s\r\n", cadena);       
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (HanesSciarrone(cadena, sizeof(cadena))) {
    	printf("Alumno: %s\r\n", cadena);
    } else {
    	printf("No se pudo serializar el alumno\r\n");
    }

    if (RaulCamacho(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (JoseDanielLopez(cadena, sizeof(cadena))) {
    	printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (AlejandroPermingeat(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (EstebanVolentini(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    return 0;
}

