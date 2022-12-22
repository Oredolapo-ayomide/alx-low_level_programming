#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: destination array where content is copied
 * @src: string to be copied
 * @n: number of characters to be copied from source
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n = 10;

	strncpy(dest, src, n);

	printf("copied string : %s\n", dest);

	return (0);
}
