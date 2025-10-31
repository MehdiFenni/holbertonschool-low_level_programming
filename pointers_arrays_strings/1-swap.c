#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers via leurs pointeurs.
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 *
 * Return: Rien.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
