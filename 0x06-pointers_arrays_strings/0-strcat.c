#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char result[];

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		result[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		result[i + j] = src[j];
		j++;
	}

	result[i + j] = '\0';

	return (0);
}
