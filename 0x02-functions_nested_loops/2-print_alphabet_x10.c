#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char i;
	int ch;

	ch = 0;
	while (ch < 10)
	{

		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		ch++;
	}
}
