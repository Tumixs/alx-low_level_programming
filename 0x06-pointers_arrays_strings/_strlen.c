#include <stdio.h>
/**
 * _strlen - find the length of a string
 *
 *  Returns: returns the length of the string
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i =0; s[i]; i++)
		j = i + 1;
		return (j);
}

/**
 * main - program
 * 
 * return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

