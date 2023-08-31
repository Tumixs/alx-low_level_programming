/*
 * File: 4-clear_bit.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * clear_bit - Sets the bit at index to 0.
 * @n: number
 * @index: Index of bit in number.
 *
 * Return: Returns 1 on success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
