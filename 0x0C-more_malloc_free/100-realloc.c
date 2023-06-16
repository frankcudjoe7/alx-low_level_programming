#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1, *old_pointer;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);

	old_pointer = ptr;

	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			pointer1[index] = old_pointer[index];
	}

	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			pointer1[index] = old_pointer[index];
	}

	free(ptr);
	return (pointer1);
}
