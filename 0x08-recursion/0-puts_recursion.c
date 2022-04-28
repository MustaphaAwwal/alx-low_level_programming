#include "main.h"

/**
 * _puts_recursion - inserts string
 * @s: to be inserted
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		return _puts_recursion(s + 1);
	}
	_putchar('\n');
}
