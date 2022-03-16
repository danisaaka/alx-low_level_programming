#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_alphabet_x10 - print the lower alphabet 10 times
 * each time in new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
		i++;
	}
}
