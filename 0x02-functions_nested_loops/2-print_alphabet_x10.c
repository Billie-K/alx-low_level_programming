#include "holberton.h"
/**
* print_alphabet_x10 - the entry point
*
* Description: prints alphabet in small caps x10
* Return: always 0
*/

void print_alphabet_x10(void)
{
int j;

for (j = 0; j < 10; j++)
{
int i;
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
