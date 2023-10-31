#include "main.h"

/**
 *create_file - function name to create a file with permission
 *@filename: parameter to take file name
 *@text_content: parameter to store content
 *
 *Return: return 1 on success and -1 if fail.
 */
int create_file(const char *filename, char *text_content);
{
	int file_d;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (file_d == -1)
		return (-1);
	if (text_constent == NULL)
		text_constent = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		rwr = write(file_d, text_constent, nletters);
	if (rwr == -1)
		return (-1);
	close(file_d);
	return (1);
}
