#ifndef _LIBPACKAGE_H_
#define _LIBPACKAGE_H_

typedef struct args
{
	int a;
	int b;
} args_t;

int add(int a, int b);
int sub(int a, int b);

int addPointer(args_t *arg);
args_t* createArgs(int a, int b);

#endif // _LIBPACKAGE_H_
