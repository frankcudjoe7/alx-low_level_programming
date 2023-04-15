#include "main.h"
#include <stdlib.h>


/**
 *read_textfile - a function that reads a textfile and returns it
 *			to the POSIX output
 * @filename: A pointer that points to the name of the file
 * @letters: the number of letters the function should read
 *		and print
 *
 * Return: if the function fails or the filename is a null value - 0
 *		openf / writef - the actual number of bytes the
 *		function can read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf;
	ssize_t readf;
	ssize_t writef;
	char *buffer_value;

	if (filename == NULL)
		return (0);

	buffer_value = malloc(sizeof(char) * letters);

	if (buffer_value == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	readf = read(openf, buffer_value, letters);
	writef = write(STDOUT_FILENO, buffer_value, openf);

	if (openf == -1 || writef == -1 || readf == -1 || writef != readf)
	{
		free(buffer_value);
		return (0);
	}
	free(buffer_value);
	close(openf);

	return (writef);

}

