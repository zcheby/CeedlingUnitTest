#include <stdio.h>
#include "calc1.h"
#include "libpackage.h"

int addsub(int a, int b)
{
	int ret1 = add(a, b);
	int ret2 = sub(a, b);

	return ret1 + ret2;
}

int subadd(int a, int b)
{
	int ret1 = add(a, b);
	int ret2 = sub(a, b);

	return ret1 - ret2;
}
