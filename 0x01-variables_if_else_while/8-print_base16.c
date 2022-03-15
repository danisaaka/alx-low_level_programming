#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 48;

	for (; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
