#include "holberton.h"
/**
* print_alphabet - the entry point
*
* Description: prints alphabet in small caps
* Return: always 0
*/

void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}

_putchar('\n');

}
