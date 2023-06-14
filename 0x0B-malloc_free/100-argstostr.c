#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int index, number, right, left;

       	right = 0; 
	left = 0;
	

	if (ac == 0 || av == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (number = 0; av[index][number]; number++)
			left++;
	}
	left += ac;

	string = malloc(sizeof(char) * left + 1);
	
	if (string == NULL)
		return (NULL);
	
	for (index = 0; index < ac; index++)
	{
		for (number = 0; av[index][number]; number++)
		{
			string[right] = av[index][number];
			right++;
		}

		if (string[right] == '\0')
		{
			string[right++] = '\n';
		}
	}

	return (string);
}

