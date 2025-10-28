#include "main.h"

/**
* print_numbers - Affiche les chiffres de 0 à 9 suivi d'un retour à la ligne.
*
* Description: Utilise _putchar pour écrire chaque caractère.
* Return: void
*/
void print_numbers(void)
{
	char d = '0';

	while (d <= '9')
	{
	_putchar(d);
	d++;
	}

	_putchar('\n');
}

