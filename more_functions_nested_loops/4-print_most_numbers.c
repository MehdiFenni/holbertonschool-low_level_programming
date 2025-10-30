#include "main.h"

/**
 * print_most_numbers - Affiche 0..9 sauf 2 et 4, puis un '\n'.
 * Return: void
 */
void print_most_numbers(void)
{
	char d = '0';

	while (d <= '9')
	{
	if (d != '2' && d != '4')
	   _putchar(d);


	d++;
	}


	_putchar('\n');
}
