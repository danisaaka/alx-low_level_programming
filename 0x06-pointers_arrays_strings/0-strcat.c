#include "main.h"

/**
 * _strcat - appends the s2 string to the s1 string
 * overwriting the terminating null byte(\0) at the end
 * @s1: the source
 * @s2: the append
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *cpy;

	for(; dest[len] != '\0'; len++)
		;

	cpy = dest + len;
	while (*src != '\0')
		*cpy++ = *src++;
	*cpy = '\0';

	return (dest);
}
