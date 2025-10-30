#include "main.h"

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
