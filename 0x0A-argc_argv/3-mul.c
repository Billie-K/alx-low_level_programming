#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a progrmam that prints mul of args
* @argc: the number of args
* @argv: the arguments to multiply
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
int total = 1, i;


if (argc == 3)
{
for (i = 1; i < argc; i++)
{
total *= atoi(argv[i]);
}
printf("%d\n", total);
return (0);
}
printf("Error\n");
return (1);
}
