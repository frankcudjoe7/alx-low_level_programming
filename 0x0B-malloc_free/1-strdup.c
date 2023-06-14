#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup: returns memory address of duplicated str
 * @str: string to duplicate
 *
 * Description: Copies str into new and returns mem address
 * Return: 0
 *
 */


char *_strdup(char *str)
{
	char *string;
	unsigned int index, count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	string = malloc(sizeof(char) * (count + 1));

	if (string == NULL)
		return (NULL);

	for (index = 0; index < count; index++)
		string[index] = str[index];

	return (string);
}
