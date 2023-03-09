#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
  * is_prime_number - Returns a prime number
  * @n: Number to be checked
  *
  * Return: Integer value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - Checks if number is prime
  * @n: Number to be checked
  * @i: Number of iterations
  *
  * Return: 1 if prime or 0 if composite
  */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}

