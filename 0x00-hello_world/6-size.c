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
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d bytes(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
