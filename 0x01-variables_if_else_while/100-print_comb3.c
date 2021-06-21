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
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}

}
putchar('\n');
return (0);
}
