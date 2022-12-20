#include "main.h"
/**
 *rev_string - a function that reverse a string
 *@s : string
 *Return : 0;
 */
void rev_string(char *s)
{
int a, b;
b = 0;
while (s[b] != '\0')
b++;
for (a = b -1; a >= 0; a--)
{
_putchar(s[a]);
}
}
