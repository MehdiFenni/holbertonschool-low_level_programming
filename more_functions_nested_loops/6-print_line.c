/* 6-print_line.c */
#include "main.h"

/**
 * print_line - trace une ligne droite dans le terminal
 * @n: nombre de fois où le caractère '_' est imprimé
 *
 * Si @n <= 0, la fonction imprime seulement un '\n'.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
