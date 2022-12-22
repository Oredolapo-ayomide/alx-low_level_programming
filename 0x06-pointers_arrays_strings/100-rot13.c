#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

char *rot13(char *src)
{
	if(src == NULL) 
	{
		return NULL;
	}

	char* result = malloc(strlen(src));

	if(result != NULL)
	{
		strcpy(result, src);
		char* current_char = result;

		while (*current_char != '\0')
		{
			if ((*current_char

