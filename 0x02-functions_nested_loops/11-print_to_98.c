#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: the starting point of the function.
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);
	else if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("%d\n", 98);
}
