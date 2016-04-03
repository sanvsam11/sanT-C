#include <stdio.h>
int i = 10;
void main ()
{
static int j = 20;
int k = 30;
printf ("%d, %d, %d",++i,++i,++i);
printf("\n");
printf ("%d %d %d",j++,++j,++j);
printf("\n");
printf ("%d %d %d",++k,++k,++k);
}
