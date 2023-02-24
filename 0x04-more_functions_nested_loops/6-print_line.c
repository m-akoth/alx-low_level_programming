#include "main.h"

/**
 * print_line - Function that draws a straight line
 * @n: Number of lines to be drawn
 *
 */
void print_line(int n)

{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
