#include <"main.h">

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *m = "_putchar";

	while (*m)
	{
		_putchar(*m);
		*m++;
	}
	_putchar('\n');

	return (0);
}
