#ifndef _LIBPACKAGE_H_
#define _LIBPACKAGE_H_

typedef struct args
{
	int a;
	int b;
} args_t;

int add(int a, int b);
int sub(int a, int b);

args_t* createArgs(int a, int b);
int addArgs(args_t *arg);
int subArgs(args_t *arg);

#endif // _LIBPACKAGE_H_
