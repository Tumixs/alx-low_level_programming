/*
 * File: 3-set_bit.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * set_bit - sets the value of bit at index to `1`
 * @n: number
 * @index: index value of bit in number to set
 *
 * Return: returns 1 on success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
