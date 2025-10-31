#include "main.h"

/**
 * print_rev - affiche une chaîne en ordre inverse, puis un '\n'.
 * @s: pointeur vers la chaîne C (terminée par '\0')
 *
 * Return: Rien.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;


	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);


	_putchar('\n');
}
