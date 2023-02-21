#include <unistd.h>

/**
 * _putchar - write character to stdout
 *
 * return on success
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}

