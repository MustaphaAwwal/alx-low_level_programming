#include "main.h"

/**
 * puts2 - print multiples of 2
 * @str: to be considerd
 * Return: always 0
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
