/**
 * Project 0x15: File I/O
 * Task 0.
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
/**
 * read_textfile - reads a text file and /
 * prints it to the posix stdout
 * @filename: name of file to read
 * @letters: number of letters to read
 *
 * Return: returns the number of characters read,
 * returns 0 if error occurs.
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
