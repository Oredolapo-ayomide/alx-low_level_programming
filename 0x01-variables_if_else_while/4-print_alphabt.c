#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	char sa;

	for (sa = 'a'; sa <= 'z'; sa++)
	{
		if (sa != 'e' && sa != 'q')
			putchar(sa);
	}

	putchar('\n');

	return (0);
}

