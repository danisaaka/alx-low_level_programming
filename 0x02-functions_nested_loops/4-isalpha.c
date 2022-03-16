#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _isalpha - checks alphabetical order
 * @c : parameter to be checked
 * Return: value 0
 */
int _isalpha(int c)
{
	if (((c >= 97 && c <= 122)) || ((c >= 65 && c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
