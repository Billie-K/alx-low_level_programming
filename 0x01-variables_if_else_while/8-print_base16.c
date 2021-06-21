#include <stdio.h>
/**
* main - the main func
*
* Description: a program that prints base 16 numbers
* Return: returns the list
*/

int main(void)
{
int a;
char b;

for (a = 0; a < 10; a++)
{
printf("%d", a);
}

for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}

putchar('\n');
return (0);

}
