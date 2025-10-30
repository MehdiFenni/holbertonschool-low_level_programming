#include "main.h"

/**
 * print_triangle - Affiche un triangle avec le caractère '#'.
 * @size: Taille du triangle (nombre de lignes).
 *
 * Description: Imprime une nouvelle ligne seule si @size <= 0.
 * Return: Rien.
 */
void print_triangle(int size)
{
	int row, sp, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{

		for (sp = 0; sp < size - row; sp++)
			_putchar(' ');


		for (hash = 0; hash < row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
