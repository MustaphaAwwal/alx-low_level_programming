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
	int i, j, result[];

	i = 0;
	j = 0;

	while (dest[i] != '\0'; i++)
	{
		result[i] = dest[i];
	}

	while (src[j] != '\0'; j++)
	{
		result[i + j] = src[j];
	}

	result[i + j] = '\0';

	return (0);
}
