#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of size and for character c
 * @size: the size of the array
 * @c: the character
 *
 * Description: create an array of size and assign c
 * Return: pointer to array, NULL if fail
 *
 */


char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int count;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)
		return (NULL);


	for (count = 0; count < size; count++)
		string[i] = c;

	return (string);
}
