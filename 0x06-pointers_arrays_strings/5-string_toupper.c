#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Return: Always 0 
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; [i] != '\0'; i++)
	{
		if ( [i] >= 'a' && [i] <= 'z')
			
			[i] = (int) [i] - 32;
	}

	return (0);
}

