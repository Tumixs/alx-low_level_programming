/*
 * 100-first.c
 * Author: Asere Oluwatumise S.
 */
#include <stdio.h>

void startup(void) __attribute__((constructor));
/**
 * startup - executes before the main function
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
