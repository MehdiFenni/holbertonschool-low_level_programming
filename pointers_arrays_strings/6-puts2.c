#include "main.h"


/**
 * puts2 - prints every other character of a string, starting with index 0,
 *         then adds a trailing newline.
 * @str: pointer to the NUL-terminated C string
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
