#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
