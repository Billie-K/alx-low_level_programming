#include "holberton.h"
/**
* _isalpha - check whether character is from alphabet
*
* Return: 1 if true 0 if false
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
