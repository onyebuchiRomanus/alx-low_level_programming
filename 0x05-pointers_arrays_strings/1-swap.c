#include "main.h"
/**
 *swap_int - a functions that swaps the values of two intergers
 *@a:swaps value of b
 *@b:swaps value of a
 *Return : 0
 */
void swap_int(int *a, int *b)
{
int c;
c=*a;
*b=*a;
*b=c;
}
