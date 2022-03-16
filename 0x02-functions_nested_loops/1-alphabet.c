#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_alphabet -function
 * Return: Always 0 (Success)
 */
void trimTrailing(char * x);
void print_alphabet(void)
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}

void trimTrailing(char * x)
{
	int index, i;

	index = -1;

	i = 0;

	while(x[i] != '\0')
	{
		if(x[i] != ' ' && x[i] != '\t' && x[i] != '\n')
		{
			index = i;
		}
		
		i++;
	}
	x[index + 1] = '\0';
}

