/*
 * calc2.c
 *
 *  Created on: 2014/07/21
 *      Author: YutaOura
 */

#include <stdio.h>

#include "calc2.h"
#include "libpackage.h"

int calc2(int a, int b)
{
	args_t* ret = createArgs(a, b);

	return ret->a + ret->b;
}

int calc3(int a, int b)
{
	args_t tmp;
	tmp.a = a;
	tmp.b = b;

	return addPointer(&tmp);
}
