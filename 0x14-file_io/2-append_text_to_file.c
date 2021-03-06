#include "holberton.h"


/**
 *append_text_to_file- appends text to the end of a file
 *@filename: the file to append to
 *@text_content: the text to be appended to the file
 *Return: 1 on success and -1 if fails
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, test;

	if (!filename)
		return (-1);

	if (!text_content)
		if (filename)
			return (1);


	fd = open(filename, O_RDWR | O_APPEND);

	if (!fd)
		return (-1);

	for (i = 0 ; text_content[i] ; i++)
		;

	test = write(fd, text_content, i);
	if (test == -1)
		return (-1);

	close(fd);
	return (1);
}
