#include "holberton.h"
/**
* _isdigit - a test to see if argument is 0-9
* @c: the parameter to test
*
* Return: 1 if digit, else 0
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}

}
