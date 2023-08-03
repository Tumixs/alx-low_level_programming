/* Project 0x08: 100-is_palindrome.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
char getstr(char *st);
int is_palindrome(char *s);
/**
 * getstr - returns a string by each character
 * @s: string
 *
 * Return: returns the last char
 */
char getstr(char *st)
{
	return (*st);
}
/**
 * is_palindrome - determines if a string is a palindrome
 * @s: string
 *
 * Return: returns 1 if string is a palindrome,
 * otherwise returns 0.
 */
int is_palindrome(char *s)
{
	if (*s != '\0')
		if (getstr(s + 1) != is_paldinrome(s + 1))
			return (0);
	return (1);
}
