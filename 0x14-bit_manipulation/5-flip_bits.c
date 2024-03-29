/*
 * File: 5-flip_bits.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * flip_bits - Gets the number of bits to flipped to get another number
 * @n: Number 1
 * @m: Number 2
 *
 * Return: returns the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, nbits = 0;

	while (xor > 0)
	{
		nbits += (xor&1);
		xor >>= 1;
	}
	return (nbits);
}
