#include "main.h"
/**
* _strlen- returns the length of a string.
* @s : char to check
* Return: 0;
*/
int _strlen(char *s)
{
int count = 0; /* start the counter from 0*/
for (; *s++;)
count++;
return (count);
}
