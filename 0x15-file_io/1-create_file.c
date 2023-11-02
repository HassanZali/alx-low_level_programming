#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 *create_file - function name to create a file with permission
 *@filename: parameter to take file name
 *@text_content: parameter to store content
 *
 *Return: return 1 on success and -1 if fail.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(file_d, text_content, len);

	if (file_d == -1 || i == -1)
		return (-1);

	close(file_d);
	return (1);
}
