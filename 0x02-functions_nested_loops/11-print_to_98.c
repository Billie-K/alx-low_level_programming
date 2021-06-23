#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print from n to 98
* @n: the starting figure
*
* Return: always 0
*/

void print_to_98(int n)
{

int  i;

if (n < 98)
{

for (i = n; i <= 98; i++)
{
printf("%d, ", i);
}

}

else if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d, ", i);
}
}
else
{
printf("98");
}
printf("\n");
}
