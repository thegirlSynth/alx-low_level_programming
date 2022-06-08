#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Return: returns i if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
