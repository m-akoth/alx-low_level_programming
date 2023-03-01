#include "main.h"

/**
 * _isupper - checks if the letter is upper
 * @c: Letter to be checked
 * Return: 1 if letter is upper or 0 if letter is lower
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
	return (1);
    }
    return (0);
}
