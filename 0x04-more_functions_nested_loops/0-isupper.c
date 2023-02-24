#include "main.h"

/**
 * _isupper - checks if the letter is upper
 *
 * Return: 1 if letter is upper or 0 if letter is lower
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
	    return (1);
    }
    return (0);
}
