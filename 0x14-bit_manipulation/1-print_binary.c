#include "main.h"

/**
 * print_binary - prints binary representation of a given number
 *
 * @n: parameter for print_binary function. Unsigned long int
 * Return: always return (0)
 */

void print_binary(unsigned long int n)
{
	int f = 63;
	int counter = 0;
	unsigned long int current_number;

	for (; f >= 0; f--)
	{
		current_number = n >> f;
		if (current_number & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
