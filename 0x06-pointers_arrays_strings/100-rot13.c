#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * rot13 - encodes a string
 * @src: pointer
 * Return: result
 */

char *rot13(char *src)
{
	if (src == NULL)
	{
		return (NULL);
	}
	char *result = malloc(strlen(src));

	if (result != NULL)
	{
		strcpy(result, src);
		char *current_char = result;

		while (*current_char != '\0')
		{
			if ((*current_char >= 97 && *current_char <= 122)
				|| (*current_char >= 65 && *current_char <= 90))
			{
				if (*current_char > 109 || (*current_char > 77
							&& *current_char < 91))
				{
					*current_char -= 13;
				}
				else
				{
					*current_char += 13;
				}
			}
			current_char++;
		}
	}
	return (result);

