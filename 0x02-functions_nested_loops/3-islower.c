#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _islower - checks for lowercase character.
 * @c: teh character to be checked.
 * .
 * Return: 1 if lowercase else 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
