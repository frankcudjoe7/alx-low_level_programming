#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index, j, len1, len2;
	
	index = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!str)
		return (NULL);

	while (index < len1)
	{
		str[index] = s1[index];
		index++;
	}

	while (n < len2 && index < (len1 + n))
		str[index++] = s2[j++];

	while (n >= len2 && index < (len1 + len2))
		str[index++] = s2[j++];

	str[index] = '\0';

	return (str);
}
