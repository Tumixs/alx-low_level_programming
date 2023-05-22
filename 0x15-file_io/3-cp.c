/*
 * Project 0x15: Task 3
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
void cp(char *, char *);
void *alloc_mem(char *);
/**
 * main - program start
 * @total_file: total args
 * @filename: char array of args
 *
 * Return: returns 0.
 */
int main(int total_file, char **filename)
{
	if (total_file != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(filename[1], filename[2]);
	return (0);
}

/**
 * cp - copies one file to another
 * @file_from: file to be copied
 * @file_to: file copied to
 *
 */
void cp(char *file_from, char *file_to)
{
	ssize_t o1, o2, w, r, c1, c2;
	char *buffer;

	buffer = alloc_mem(file_to);
	o1 = open(file_from, O_RDONLY);
	r = read(o1, buffer, 1024);
	o2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (r == -1 || o1 == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		w = write(o2, buffer, r);
		if (w == -1 || o2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}

		r = read(o1, buffer, 1024);
		o2 = open(file_to, O_WRONLY | O_APPEND);
	} while (r > 0);

	c1 = close(o1);
	if (c1 == -1)
		dprintf(2, "Error: Can't close fd %ld\n", o1);

	c2 = close(o2);
	if (c2 == -1)
		dprintf(2, "Error: Can't close fd %ld\n", o2);
}

/**
 * alloc_mem - allocates memory(1024 bytes)
 * @filename: Name of buffer
 *
 * Return: returns a pointer to the allocated memory
 */
void *alloc_mem(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", filename);
		exit(99);
	}
	return (buf);
}
