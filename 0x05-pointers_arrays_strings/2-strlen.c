#include "holberton.h"
/**
* _strlen - output length of string
* @s: the string
*
* Return: the string length
*/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
