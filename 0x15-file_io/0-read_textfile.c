#include "main.h"
#include <unistd.h>

/**
 *read_textfile - function to read text in a file
 *@filename: name of file
 *@letters: takes the size of letters
 *Return: return 1 or -1.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	size_t len1, len2;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	len1 = read(file_d, buffer, letters);
	close(file_d);
	if (len1 == -1)
	{
		free(buffer);
		return (0);
	}
	len2 = write(STDOUT_FILENO, buffer, len1);
	free(buffer);
	if (len1 != len2)
		return (0);
	return (len2);
}
