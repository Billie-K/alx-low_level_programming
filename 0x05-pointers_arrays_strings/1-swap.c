#include "holberton.h"
/**
* swap_int - swaps values of two integers
* @a: first parameter
* @b: second parameter
*
* Return nothing
*/

void swap_int(int *a, int *b)
{
int d;
d = *a;

*a = *b;
*b = d;
}
