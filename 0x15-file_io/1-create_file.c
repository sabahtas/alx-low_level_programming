#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rwr, nlet = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nlet = 0; text_content[nlet];)
			nlet++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rwr = write(fd, text_content, nlet);

	if (fd == -1 || rwr == -1)
		return (-1);

	close(fd);

	return (1);
}

