#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints args num followed by
* a new line
* @argc: the number of args
* @argv: an array of the args
* Return: 0 if successful
*/
int main(int argc, char **argv)
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
