#include <stdio.h>
#include "calc2.h"
#include "libpackage.h"

int addsub(int a, int b)
{
	args_t* args = createArgs(a, b);
	int ret1 = addArgs(args);
	int ret2 = subArgs(args);

	return ret1 + ret2;
}

int subadd(int a, int b)
{
	args_t* args = createArgs(a, b);
	int ret1 = addArgs(args);
	int ret2 = subArgs(args);

	return ret1 - ret2;
}
