#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char copy[1000];

	for (; s[i]; i++)
		copy[i] = s[i];
	i -= 1;
	for (; i >= 0; i--)
		s[j++] = copy[i];
}
