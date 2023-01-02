#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: the pointer to memory area
 * @b: constant to fill memory with
 * @n: the size of bytes memory to print
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}

	return (s);
}


