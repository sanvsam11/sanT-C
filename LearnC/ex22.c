#include<stdio.h>
#include "ex22.h"
int size=1000;
static int age = 23;

int get_age(){
 return age;
}
void set_age(int a){
 age = a;
}
double update_ratio(double ratio_arg){
 static double ratio = 10.10;
 double ratio_old = ratio;
 ratio = ratio_arg;
 return ratio_old;
}
void print_size(){
 printf("Size:%d", size);
}
