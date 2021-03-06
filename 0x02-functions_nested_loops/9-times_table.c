#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int m, n, p;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			p = m * n;
			if (n == 0)
				putchar(p + '0');
			else
			{
				if (p < 10)
				{
					putchar(',');
					putchar(32);
					putchar(32);
					putchar(p + '0');
				}
				else
				{
					putchar(',');
					putchar(32);
					putchar(32);
					putchar((p / 10) + '0');
					putchar((p % 10) + '0');
				}
			}
		}
		putchar('\n');
	}
}
