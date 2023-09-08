/*
 * File: 0-read_textfile.c
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * read_textfile - reads a textfile and prints to POSIX stdout
 * @filename: name of textfile
 * @letters: number of characters to print
 *
 * Return: returns the number of charcaters printed,
 * if error returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
