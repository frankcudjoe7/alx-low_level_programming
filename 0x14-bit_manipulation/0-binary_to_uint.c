#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: string containing the binary digit
 *
 * Return: always return (0)
 */

unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int decimal_number;

	decimal_number = 0;

	if (!b)
		return (0);

	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > '1')
			return (0);

		decimal_number = 2 * decimal_number + (b[num] - '0');
	}

	return (decimal_number);
}
