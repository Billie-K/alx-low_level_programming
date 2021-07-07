#include "holberton.h"
/**
* _pow_recursion - return x raised to the power
* of y
* @x: the first parameter
* @y: the second parameter
* Return: x raised to y
*/
int _pow_recursion(int x, int y)
{
int res = x;

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}

res *= _pow_recursion(x, y - 1);

return (res);
}
