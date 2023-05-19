/*
 * Project 0x15: Task 3
 * Author: Asere Oluwatumise S.
 */
#include "main.h"
void cp(char *, char *);
void *alloc_mem(void);
/**
 * main - program start
 * @total_file: total args
 * @file: char array of args
 *
 * Return: returns 0.
 */
int main(int total_file, char **file)
{
	if (total_file != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(file[1], file[2]);
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

	o1 = open(file_from, O_RDONLY);
	o2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (o1 == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	if (o2 == -1)
	{
		dprintf(2, "Error: can't write to %s\n", file_to);
		exit(99);
	}
	while (r)
	{
		r = read(o1, alloc_mem(), 1024);
		if (r == -1)
		{
			dprintf(2, "Error: can't read from file %s\n", file_from);
			exit(98);
		}

		w = write(o2, alloc_mem(), 1024);
		if (w == -1)
		{
			dprintf(2, "Error: can't write to %s\n", file_to);
			exit(99);
		}
	}

	c1 = close(o1);
	if (c1 == -1)
		dprintf(2, "Error: can't close fd %ld\n", o1);

	c2 = close(o2);
	if (c2 == -1)
		dprintf(2, "Error: can't close fd %ld\n", o2);
}

/**
 * alloc_mem - allocates memory(1024 bytes)
 *
 * Return: returns a pointer to the allocated memory
 */
void *alloc_mem(void)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (NULL);
	return (buf);
}
