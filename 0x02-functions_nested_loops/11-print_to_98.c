#include "main.h"
#include <stdio.h>
/**
 *print_to_98- prints all natural numbers from n to 98.
 *followed by new a line
 *@n:number to print
_putchar: prints to stdout.
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
