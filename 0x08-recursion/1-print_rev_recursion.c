#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		print_reverse(s + 1);
		printf("%c", *s);
	}
}



