#include "main.h"
/**
print_sign - prints the sign of a number.
*
*@n: number var
*
*_putchar: prints to standard output
*
*Returns: return 1 (if n is greater than 0)
* OR 0 (if n is 0) OR -1 (if n is less than 0)
*
Return: Always 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if(n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
