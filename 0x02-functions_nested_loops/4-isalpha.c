#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: returns 1 if c is an alphabet
 * else returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	return (0);
}
