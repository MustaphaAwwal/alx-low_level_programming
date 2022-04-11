#include <stdio.h>

/**
 * main - prints all letter except e and q
 *
 * Return: 0 always success
 */
int main(void)
{
	char i;

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
