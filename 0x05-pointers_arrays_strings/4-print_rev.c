#include "holberton.h"
/**
* print_rev - print a string in reverse
* @s: the string to be reversed
*
* Return: nothing
*/

void print_rev(char *s)
{
int i = 0;

while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
