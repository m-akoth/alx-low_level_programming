#include "main.h"

/**
 * _isdigit - checks if a digit is between 0 and 9
 * @c: input
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
