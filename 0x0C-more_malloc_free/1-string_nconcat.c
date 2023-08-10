/*
 * File: 1-string_nconcat.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of new string
 *
 * Return: returns a pointer to the new string contining `s1`
 *	   and the first `n` bytes of `s2`.
 *	   on failure retunrs NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buf;
	unsigned int len = n, index;

	if (s1)
		for (; s1[len]; len++)
			;
	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (NULL);
	/* Insert string to buffer */
	len = 0;
	if (s1)
		for (index = 0; s1[index] != '\0'; index++)
			buf[len++] = s1[index];
	if (s2)
		for (index = 0; s2[index] && index <= n; index++)
			buf[len++] = s2[index];
	buf[len] = '\0';
	return (buf);
}
