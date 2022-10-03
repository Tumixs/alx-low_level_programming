#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/
int printer(char *s);
int main(void)
{
char *s;
s = str_concat("Betty ", "Holberton");
printer(s);
s = str_concat("HELLO ", NULL);
printer(s);
s = str_concat(NULL, "HELLO");
printer(s);
s = str_concat(NULL, NULL);
printer(s);
return (0);
}
int printer(char *s)
{
if (s == NULL)
{
printf("failed\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
