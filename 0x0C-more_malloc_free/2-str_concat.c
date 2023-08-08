/*
 * File: 2-str_concat.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * str_concat - concatenates two stringd
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to the concatenated string stored in a buffer;
 *	   otherwise, returns `NULL` on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *buf;
	int len1, len2, UNUSED len3;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	buf = malloc(sizeof(char) * (len1 + len2));
	for (; len2 >= 0; len2--)
		buf[len2 + len1] = s2[len2];
	for (; len1 >= 0; len1--)
		buf[len1 - 1] = s1[len1 - 1];
	/* buf[len1 + len2] = '\0'; */
	return (buf);
}
