/*
 * Project 0x15: file I/O - Task 1
 * Author: Asere Oluwatumise s.
 */
#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text to write to file
 *
 * Return: returns 1 on success else returns -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, w, i = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		w = write(o, text_content, i);
		if (w == -1)
			return (-1);
	}
	return (1);
}
