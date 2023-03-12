#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 * @c: The number to be checked
 * Return: 1 for uppercase letter or 0 for anything else
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
