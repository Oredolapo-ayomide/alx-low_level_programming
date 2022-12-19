#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p = &n;
	*p = 98;

	printf("%d", n);

	return (0);

}
