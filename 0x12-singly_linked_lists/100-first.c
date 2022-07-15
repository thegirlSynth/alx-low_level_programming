#include "lists.h"

/**
 * printBeforeMain - prints a string before main executes.
 */

void __attribute__((constructor))printBeforeMain(void);

void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

