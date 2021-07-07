#include "holberton.h"
/**
* _print_rev_recursion - print in reverse
* @s: the string parameter to be reversesd
* Return nothing
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
