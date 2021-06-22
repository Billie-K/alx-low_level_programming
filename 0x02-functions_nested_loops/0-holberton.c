#include "holberton.h"
/**
* main - the entry point
*
* Description: a program that prints holberton
* Return: 0 always
*/

int main(void)
{

char *school = "Holberton";
int i = 0;

for (; i < 9; i++)
{
_putchar(school[i]);
}

_putchar('\n');

return (0);
}
