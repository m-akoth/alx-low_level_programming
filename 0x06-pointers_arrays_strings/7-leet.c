#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @s: String to encode
  * Return: The encoded string
  */
char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char d[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < c)
		{
			if (s[a] == d[b] || s[a] - 32 == d[b])
			{
				s[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
