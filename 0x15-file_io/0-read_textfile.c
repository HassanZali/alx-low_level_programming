#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *read_textfile - function to read text in a file
 *@filename: name of file
 *@letters: takes the size of letters
 *Return: return w- number of bytes read,0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d;
	ssize_t lenr;
	ssize_t lenw;
	char *buffer;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	lenr = read(file_d, buffer, letters);
	lenw = write(STDOUT_FILENO, buffer, lenr);

	free(buffer);
	close(file_d);
	return (lenw);
}
