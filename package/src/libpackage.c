#include <stdlib.h>
#include "libpackage.h"

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

args_t* createArgs(int a, int b)
{
	args_t* args = (args_t *)malloc(sizeof(args_t));
	args->a = a;
	args->b = b;

	return args;

	/*
	args_t args;
	args.a = a;
	args.b = b;

	return &args;
	*/
}

int addArgs(args_t *args)
{
	return args->a + args->b;
}

int subArgs(args_t *args)
{
	return args->a - args->b;
}
