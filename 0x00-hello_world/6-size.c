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
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu bytes(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)", sizeof(float));
return (0);
}
