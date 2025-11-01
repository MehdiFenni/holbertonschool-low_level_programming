#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: maximum number of bytes to copy
 *
 * Description: This function copies at most n bytes from src
 * to dest. If src is shorter than n characters, the remainder
 * of dest will be padded with null bytes. Works exactly like strncpy.
 *
 * Return: pointer to the resulting string dest
 */
>>>>>>> 4c4cc7c67fb14bcc99333820c9a4b9f6eb8e7e90
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);

	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
