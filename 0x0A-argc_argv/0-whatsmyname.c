#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints its name followed by
* a new line
* @argc: the number of args
* @argv: an array of the args
* Return: 0 if successful
*/
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
exit(EXIT_SUCCESS);
}
