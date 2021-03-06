/*

    * Author: Samuel "MrOverkill" Meyers
    * License: GPL v3
    * Version: 0.3.0
    * Date: 06/18/2014

*/

#ifndef FHA_H
#define FHA_H

#define FHA_VERSION_MAJOR 0
#define FHA_VERSION_MINOR 3
#define FHA_REVISION 0

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* __fhaStr;
int __fhaLength;

void fhaInit(char* file);
char* fhaHash();
void fhaClear();

#endif
