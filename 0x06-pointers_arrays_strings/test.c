#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "first stringsssssssssssssss";
	char s2[] = "second string";

	strncpy(s1, s2, 3);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}
