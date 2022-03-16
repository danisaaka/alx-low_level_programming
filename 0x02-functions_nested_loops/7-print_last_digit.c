#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_last_digit - a fucntion that prints the last digit of a number.
 * @n: The parameter to be worked on
 *
 * Return: Always n
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n = -n;
	putchar(n + '0');
	return (n);
}
