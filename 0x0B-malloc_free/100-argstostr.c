/*
 * File: 100-argstostr.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * argstostr - concatenates the command-line arguments,
 *		args are separated by a newline.
 * @ac: number of args
 * @av: array of args
 *
 * Return: returns a pointer to the new concatenated string.
 *	   Returns `NULL` on failure.
 */
char *argstostr(int ac, char **av)
{
	char *buf;
	int index, arg, len = 0;
	
	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
		for (index = 0; av[arg][index]; index++)
			len++;
	buf = malloc(sizeof(char) * len + 1);
	if (buf == NULL)
		return (NULL);
	len = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (index = 0; av[arg][index]; index++)
			buf[len++] = av[arg][index];
		buf[len++] = '\n';
	}

	return (buf);
}
