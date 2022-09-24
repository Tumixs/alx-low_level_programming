#include <stdio.h>
#include "main.h"

/**
* cap_string - capitalizes the first letter of each word
* @s: a pointer to the string
* Return: returns a string
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			if (s[i] == ' ' || s[i] == 10 || s[i] == 44
				|| s[i] == 59 || s[i] == 46 || s[i] == 33
					|| s[i] == 63 || s[i] == 34 || s[i] == 40
						|| s[i] == 41 || s[i] == 123 || s[i] == 125
							|| s[i] == 9)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
