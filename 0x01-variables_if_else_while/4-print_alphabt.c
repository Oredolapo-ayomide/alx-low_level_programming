#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and is followed by a new line 
 * except q and e
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

