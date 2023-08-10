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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int total_len;

	/* Create string buffer */
	if (s1)
		for (; s1[len1]; len1++)
			;
	if (s2)
		for (; s2[len2]; len2++)
			;
	total_len = len1 + len2;
	buf = malloc(sizeof(char) * total_len);
	if (buf == NULL)
		return (NULL);
	/* Insert string to buffer */
	len1 = 0;
	len2 = 0;
	if (s1)
		for (; s1[len1] != '\0'; len1++)
			buf[len1] = s1[len1];
	if (s2)
		for (; s2[len2] && len2 <= n; len2++, len1++)
			buf[len1] = s2[len2];
	buf[len1] = '\0';
	return (buf);
}
