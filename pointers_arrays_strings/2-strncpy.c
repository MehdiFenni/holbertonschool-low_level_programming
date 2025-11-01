#include "main.h"

/**
 * _strncpy - copie au plus n caractères de src vers dest
 * @dest: tampon de destination
 * @src: chaîne source
 * @n: nombre maximum de caractères à copier
 *
 * Return: pointeur sur dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
