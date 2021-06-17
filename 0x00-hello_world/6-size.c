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
 printf("Size of a char: %d\n", sizeof(char), " byte(s)");
 printf("Size of an int: %d\n", sizeof(int), " byte(s)");
 printf("Size of a long int: %d\n", sizeof(long int), " byte(s)");
 printf("Size of a long long int : %d\n", sizeof(long long int), " bytes(s)");
 printf("Size of a float : %d\n", sizeof(float), " byte(s)");
return (0);
}
