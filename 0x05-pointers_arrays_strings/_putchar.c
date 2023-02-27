#include <unistd.h>

/**
 * _putchar - Prints a string
 * @c: Character to be printed
 *
 * Return: Success 1 and 0 on error
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
