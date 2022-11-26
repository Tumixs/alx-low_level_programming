
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
		_putchar(x);
		x++;
	}
		_putchar(x);
	_putchar('\n');
	return (0);
}
