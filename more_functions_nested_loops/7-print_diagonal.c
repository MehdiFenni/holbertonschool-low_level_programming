/* 7-print_diagonal.c */
#include "main.h"

/**
 * print_diagonal - trace une diagonale dans le terminal
 * @n: nombre de fois où le caractère '\' est imprimé
 *
 * Si n <= 0, n'imprime qu'un '\n'.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
