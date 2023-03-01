#include "main.h"
#include <stdio.h>

/**
 *  _strcat - Concatenates two strings
 *  @dest: Destination string
 *  @src: Source string
 *  Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int slen = 0, i;

	while (dest[slen])
	{
		slen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[slen] = src[i];
		slen++;
	}

	dest[slen] = '\0';
	return (dest);
}
