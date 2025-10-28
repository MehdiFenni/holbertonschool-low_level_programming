/* 8-print_square.c */
#include "main.h"

/**
 * print_square - affiche un carré de taille donnée, suivi d'un '\n'
 * @size: taille du carré (côté en caractères)
 *
 * Si size <= 0, n'affiche qu'un '\n'.
 * Le carré est constitué du caractère '#'.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
	_putchar('\n');
	}
}
