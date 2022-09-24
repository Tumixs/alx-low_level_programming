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
	char *value = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encode = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == value[j])
			{
				s[i] = encode[j];
				break;
			}
		}
	}
	return (s);
}
