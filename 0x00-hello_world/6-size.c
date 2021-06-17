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
printf("Size of a char: %d byte(s)", sizeof(char));
printf("Size of an int: %d bytes(s)", sizeof(int));
printf("Size of a long int: %d byte(s)", sizeof(long int));
printf("Size of a long long int : %d byte(s)", sizeof(long long int));
 printf("Size of a float : %d byte(s)", sizeof(float));
return (0);
}
