#include "pn.c"

struct number{
 int a;
 int (*ispositive)(int);
};

typedef struct number numCreator;
