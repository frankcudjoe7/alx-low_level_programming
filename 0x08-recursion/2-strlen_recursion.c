#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */


int _strlen_recursion(char *s)
{
	int loong = 0;

	if (*s)
	{
		loong++;
		loong += _strlen_recursion(s + 1);
	}

	return (loong);
}

