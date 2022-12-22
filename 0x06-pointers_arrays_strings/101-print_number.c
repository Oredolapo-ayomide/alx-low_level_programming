#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_number - function that prints an integer
 * @n: number of prints
 * Return: nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n == 0)
		putchar('0');

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
