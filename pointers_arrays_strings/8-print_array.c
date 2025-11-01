#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 *
 * Description: This function prints n elements of an integer array,
 * separated by commas and spaces, followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i != 0)
		printf(", ");
	  printf("%d", a[i]);
	}
	printf("\n");
}


