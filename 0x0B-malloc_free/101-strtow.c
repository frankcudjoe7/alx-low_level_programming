#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, count, word;

	flag = 0;
	word = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word++;
		}
	}

	return (word);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **mat, *temp;
	int index, kin, length, words, count, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (index = 0; index <= length; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			if (count)
			{
				end = index;
				temp = (char *) malloc(sizeof(char) * (count + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mat[kin] = temp - count;
				kin++;
				count = 0;
			}
		}

		else if (count++ == 0)
			start = index;
	}

	mat[kin] = NULL;

	return (mat);
}
