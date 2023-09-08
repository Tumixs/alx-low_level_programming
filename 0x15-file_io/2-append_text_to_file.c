/*
 * 2-append_text_to_file.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * append_text_to_file - opens  afile and append text to it
 * @filename: file to open
 * @text_content: text to append
 *
 * Return: returns 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, i = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_RDWR | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		write(o, text_content, i);
	}
	return (1);
}
