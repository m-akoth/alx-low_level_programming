#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: Character to print
 *
 * Return: 1 On success, -1 on error,
 * and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
