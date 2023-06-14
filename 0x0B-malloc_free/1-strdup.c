#include <stdlib.h>
#include <stdio.h>
#include "main.h"


char *_strdup(char *str)
{
	char *string;
	unsigned int index, count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	string = malloc(sizeof(char) * (count * 1));

	if (string == NULL)
		return (NULL);

	for (index = 0; index < count; index++)
		string[index] = str[index];

	return (string);
}
