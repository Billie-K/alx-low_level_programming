#include <stdio.h>
/**
* main - the main func
*
* Description: an alphabet program
* Return: return 0
*/
int main(void)
{
char ch;

for (ch = 'z' ; ch >= 'a' ; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
