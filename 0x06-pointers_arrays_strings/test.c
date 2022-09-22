#include <stdio.h>
#include <string.h>

/**
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	
	for (i = 0; s1[i]; i++);
	for (j = 0; s2[j]; j++);
	if (i > j)
	{	
		return (15);
	}
	else 
	if (i < j)
	{
		return (-15);
	}
	else
		return (0);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
