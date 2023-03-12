#include "main.h"

/**
 * _puts - Prints a string
 * @s: String to be printed
 * Return: Always 0
 */

void _puts(char *s)

{
	for (; *s != '\0'; s++)
	{
	_putchar(*s);
	}
	_putchar('\n');
}
