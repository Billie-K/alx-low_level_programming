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
putchar(ch);
}

for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
if (ch == 'Z')
{
putchar('\n');
}
}



return (0);
}
