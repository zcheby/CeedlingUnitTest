#include "libpackage.h"

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int addPointer(args_t *args)
{
	return args->a + args->b;
}

args_t* createArgs(int a, int b)
{
	args_t* ret = (args_t *)malloc(sizeof(args_t));

	return ret;
}
