#include "main.h"

/**
 * _strcmp - compare deux chaînes de caractères
 * @s1: première chaîne
 * @s2: deuxième chaîne
 *
 * Return: < 0 si s1 < s2, 0 si égal, > 0 si s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char c1, c2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;

		if (c1 != c2)
			return (c1 - c2);

		s1++;
		s2++;
	}

	c1 = (unsigned char)*s1;
	c2 = (unsigned char)*s2;
	return (c1 - c2);
}
