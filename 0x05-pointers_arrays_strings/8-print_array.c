#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n element of array of int
 * seperated by comma, followed by space.
 *@a : int to check
 *@n : int to check
*Return:0;
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
if (i != n - 1)
printf("%d,", a[i]);
else
printf("%d", a[i]);
print("\n");
}
