#include "holberton.h"
/**
* factorial - calculates the factorial of an arg
* @n: the parameter
* Return: the factorial of n
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
