#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaîne C.
 * @s: pointeur sur le premier octet de la chaîne (terminée par '\0')
 *
 * Return: nombre de caractères avant l’octet nul final.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;


	return (len);

}
