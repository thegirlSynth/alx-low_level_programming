#include "lists.h"

/**
 * printBeforeMain - prints a string before main executes.
 */

void printBeforeMain(void) __attribute__((constructor));

void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

