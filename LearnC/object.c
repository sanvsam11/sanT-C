#include<stdio.h>
#include<string.h>

void o_destroy(void *self){
 object *o = self;
 if(o) {free(o->description); free(o);}
}
