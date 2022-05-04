#include  <ctype.h>
#include "main.h"

/**
 * _islower - print and check output
 * @c: the character to check
 * Return: 1 if c is lowercae, otherwise 0
 *
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
