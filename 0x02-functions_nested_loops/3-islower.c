#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _islower
 * function
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
