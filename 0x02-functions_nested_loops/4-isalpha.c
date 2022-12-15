#include "main.h"
#include <ctype.h>
/**
*_isalpha - checks for alphabetic character.
*
*islapha - checks for c var.
*@c: checks alphabetic
*Return 1 (success) or 0 (failure)
*/
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
