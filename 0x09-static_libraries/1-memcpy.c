#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int index;
	
	j = 0;
	index = n;

	for (; j < index; j++)
	{
		dest[j] = src[j];
		n--;
	}

	return (dest);
}

