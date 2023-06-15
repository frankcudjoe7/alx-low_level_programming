#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int index, kin;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	kin = 0;
	while (src[kin] != '\0')
	{
		dest[index] = src[kin];
		index++;
		kin++;
	}

	dest[index] = '\0';
	return (dest);
}

