#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *layer = haystack;
		char *pin = needle;

		while (*layer == *pin && *pin != '\0')
		{
			layer++;
			pin++;
		}

		if (*pin == '\0')
			return (haystack);
	}

	return (0);
}

