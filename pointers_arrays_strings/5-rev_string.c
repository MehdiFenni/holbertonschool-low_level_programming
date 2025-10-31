#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères en place.
 * @s: pointeur vers la chaîne C (terminée par '\0')
 *
 * Return: Rien.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[j] != '\0')
		j++;

	j = j - 1;


	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
