#include "holberton.h"
/**
* sqrt_checker - checks natural sqrt
* @a: number to check
* @b: checker
*
* Return: a natural sqrt 
*/
int sqrt_checker(int a, int b)
{
if ((b * b) == a)
return (b);

if (b == a / 2)
return (-1);

return (sqrt_checker(a, b + 1));
}

/**
* _sqrt_recursion - returns natural square root
* @n: number to be checked
*
* Return: the natural square root
*/

int _sqrt_recursion(int n)
{
int a = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (sqrt_checker(n, a));
}
