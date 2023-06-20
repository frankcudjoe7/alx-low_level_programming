#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length, item;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (item = 0; item < length; item++)
	{
		dest[item] = src[item];
	}
	dest[item] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (length1 + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (length2 + 1));
	if (doggo->owner == NULL)
	{
		free(doggo);
		free(doggo->name);
		return (NULL);
	}
	_strcpy(doggo->name, name);
	_strcpy(doggo->owner, owner);
	doggo->age = age;

	return (doggo);
}

