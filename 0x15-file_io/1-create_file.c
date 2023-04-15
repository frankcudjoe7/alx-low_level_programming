#include "main.h"


int create_file(const char *filename, char *text_content)
{
	int openf;
	int writef;
	int length = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (; text_content[length]; length++);

	openf = open(filename, O_CREAT | O_RDR
