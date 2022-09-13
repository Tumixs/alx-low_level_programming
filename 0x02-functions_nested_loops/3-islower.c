#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: alpabet
 * Return: returns 1 if alphabet is lower case. otherwise 0
 */
int _islower(int c)
{
	if ((char)c >= 97 && (char)c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
