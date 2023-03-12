#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @c: The pointer to convert
 * Return: An integer on success
 */

int _atoi(char *c)

{

	int y = 0;
	unsigned int ui = 0;
	int i = 1;
	int di = 0;

	while (c[y])
	{
	if (c[y] == 45)
	{
	i *= -1;
	}
	while (c[y] >= 48 && c[y] <= 57)
	{
	di = 1;
	ui = (ui * 10) + (c[y] - '0');
	y++;
	}
	if (di == 1)
	{
	break;
	}
	y++;
	}
	ui *= i;
	return (ui);
}
