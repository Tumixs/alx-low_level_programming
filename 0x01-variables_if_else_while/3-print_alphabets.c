
/**
 * main - program start
 *
 * Return: returns 0
 */
int main(void)
{
	char x = 'a';

	while (x != 'Z')
	{
		if (x == 'z')
			x = 'A';
		putchar(x);
		x++;
	}
		putchar(x);
	putchar('\n');
	return (0);
}
