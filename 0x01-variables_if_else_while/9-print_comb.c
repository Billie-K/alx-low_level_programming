#include<stdio.h>
/**
* main - the main func
*
* Description: a program that prints base
* 10 numbers
* Return: returns the numbers
*/

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
