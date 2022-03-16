#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * function that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
