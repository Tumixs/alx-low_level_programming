#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: returns encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char *in = "ABCDEFGHIJKLMabcdefghijklm";
	char *out = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == in[j])
				s[i] = out[j];
			else
				if (s[i] == out[j])
					s[i] = in[j];
		}
	}
	return (s);
}
