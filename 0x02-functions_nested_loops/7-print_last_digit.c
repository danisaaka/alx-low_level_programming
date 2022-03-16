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
	int j;
	j = (n % 10);

	if (j < 0)
	{
		j = j * (-1);
	}
	putchar(j + 48);
	return (j);
}
