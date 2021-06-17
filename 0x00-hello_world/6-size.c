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
printf("Size of variable a : %d\n", sizeof(a));
printf("Size of int data type : %d\n", sizeof(int));
printf("Size of char data type : %d\n", sizeof(char));
printf("Size of float data type : %d\n", sizeof(float));
printf("Size of double data type : %d\n", sizeof(double));
return (0);
}
