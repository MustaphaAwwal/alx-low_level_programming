#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the character to look
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{

	if (isalpha(c))
		return (1);
	else
		return (0);
}
