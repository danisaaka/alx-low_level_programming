#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_alphabet -function
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}

