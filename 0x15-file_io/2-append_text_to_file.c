#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, rwr, nlet = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nlet = 0; text_content[nlet];)
			nlet++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	rwr = write(a, text_content, nlet);

	if (a == -1 || rwr == -1)
		return (-1);

	close(a);

	return (1);
}

