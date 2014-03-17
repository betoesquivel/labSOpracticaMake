/*
 * =====================================================================================
 *
 *       Filename:  numerosUno.c
 *
 *    Description:  calcula el cuadrado , cubo y cuarta potencia de 2.
 *
 *        Version:  1.0
 *        Created:  03/16/2014 21:43:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jose Alberto Esquivel Patino (), 
 *   Organization:  ITESM Campus Monterrey
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "cuadrado.h"
#include "cubo.h"
#include "cuarta.h"

int main()
{
	int a, b, c; 
	a = cuadrado(2);
	b = cubo(2);
	c = cuarta(2);
	fprintf(stdout,"a= %d\n b= %d \n c= %d \n", a, b, c); 
}

