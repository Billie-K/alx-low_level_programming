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

for (ch = 'a' ; ch <= 'z' ; ch++)
{

if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
