#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_sign - Prints the sign of a number
 * @n: parameter to be used
 * Return: 1 for positive, 0 for 0, and -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
	return (0);
}
