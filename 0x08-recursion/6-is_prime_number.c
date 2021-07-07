#include "holberton.h"

/**
* check_num - checks if a nummber is prime
* @i: the checker
* @n: the argument
* Return: 1 if number is prime else 0
*/
int check_num(int i, int n)
{
if (n < 2 || n % i == 0)
return (0);
else if (i > n / 2)
return (1);
else
return (check_num(i + 1, n));
}

/**
* is_prime_number - returns 1 if integer is prime
* @n: interger to be checked
* Return: 1 if n is prime
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (check_num(2, n));
}
