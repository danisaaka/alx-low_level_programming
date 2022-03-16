#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_sign - Prints the sign of a number
 * @n : parameter to be used
 * Return: Value 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	return (0);
}
