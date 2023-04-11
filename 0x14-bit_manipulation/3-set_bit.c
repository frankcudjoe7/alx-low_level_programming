#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 *
 * @n: pointer to number to modify
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: always return (0)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int lower_limit = 63;

	if (index > lower_limit)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
