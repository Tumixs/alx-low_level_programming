#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: returns the resulting string;
 */
char *leet(char *s)
{
	int i, j;

	char *val = "aAeEoOtTlL";
	char *enc = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == val[j])
			{
				s[i] = enc[j];
			}
		}
	}

	return (s);
}
