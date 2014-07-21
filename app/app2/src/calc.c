#include <stdio.h>

#include "calc.h"
#include "libpackage.h"

int calc(int a, int b)
{
	int ret1 = add(a, b);
	int ret2 = sub(a, b);

	return ret1 + ret2;
}
