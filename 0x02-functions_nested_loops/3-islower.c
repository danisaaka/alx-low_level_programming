#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code.
 * Return: Always 0.
 * is_lower is a funtion that checks
 * whether a char is lower or not
 * int c will be the parameter for teh function
 * .
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
