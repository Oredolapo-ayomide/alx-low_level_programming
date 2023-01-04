#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - finds length of string
 * @s: string to cal length of
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palind_recursive - checks if two char of string are equal
 * @s: string to be checked
 * @i: first index
 * @j: last index
 * Return: 1 if equal, else 0
 */

int is_palind_recursive(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (is_palind_recursive(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s:string to reverse
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0 || *s != s[len - 1])
		return (0);
	return (is_palind_recursive(s, 0, len - 1));
}
