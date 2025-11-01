#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Description: This function appends at most n bytes from src
 * to the dest string. The src string does not need to be null-terminated
 * if it contains n or more bytes. The resulting string in dest is
 * always null-terminated.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;


	for (i = 0; dest[i] != '\0'; i++)
	{
	}


	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}


	dest[i] = '\0';

	return (dest);
}

