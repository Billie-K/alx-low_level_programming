#include "holberton.h"
/**
* _isupper - checks if char is uppercasde
* @c: the char to be checked
*
* Return: 1 when uppercase, 0 otherwise
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
