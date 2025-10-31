#include "main.h"

/**
 * _puts - écrit une chaîne sur stdout, suivie d'un saut de ligne.
 * @str: pointeur vers la chaîne C (terminée par '\0')
 *
 * Return: Rien.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
