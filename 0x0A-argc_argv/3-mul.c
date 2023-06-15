#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int index = 0, dip = 0, number = 0, length = 0, factor = 0, digit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && factor == 0)
	{
		if (s[index] == '-')
			++dip;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (dip % 2)
				digit = -digit;
			number = number * 10 + digit;
			factor = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			factor = 0;
		}
		index++;
	}

	if (factor == 0)
		return (0);

	return (number);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int results;
	int num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	results = num1 * num2;

	printf("%d\n", results);

	return (0);
}
