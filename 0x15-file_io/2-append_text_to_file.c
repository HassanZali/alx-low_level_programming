#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *append_text_to_file - function name to append text file
 *@filename: parameter to take filename
 *@text_content: parameter to hold text content
 *
 *Return: return 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, i, len = 0;
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
	{
		return (-1);
	}
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	i = write(i, text_content, len);

	if (i == -1 || o == -1)
		return (-1);

	close(i);
	return (1);
}
