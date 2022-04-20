#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: function parameter
 */
void _puts(char *str)
{
  int i;

  i = puts(str);
  _putchar('\n');
}
