#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings and returns mem
 * @s1: first string
 * @s2: second string
 * Description: concatenates two string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int index, count, s1_count, s2_count;

	s1_count = 0;
	s2_count = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_count] != '\0')
		s1_count++;

	while (s2[s2_count] != '\0')
		s2_count++;

	count = s1_count + s2_count;

	string = malloc(sizeof(char) * (count + 1));

	if (string == NULL)
		return (NULL);

	for (index = 0; index < s1_count; index++)
		string[index] = s1[index];

	s2_count = 0;

	for (; index < count; index++)
	{
		string[index] = s2[s2_count];
		index++;
	}

	return (string);
}
