#include <stdio.h>
/**
* main - this is the main function
*
* Description: Showing the sizes of
* different data types.
* Return: it will return 0
*/

int main(void)
{
int a = 16;
printf("Size of a char: %d", sizeof(char), " byte(s)");
printf("Size of an int: %d", sizeof(int), " byte(s)");
printf("Size of a long int: %d", sizeof(long int), " byte(s)");
printf("Size of a long long int : %d", sizeof(long long int), " bytes(s)");
printf("Size of a float : %d", sizeof(float), " byte(s)");
return (0);
}
