#include <stdio.h>

/**
 * main - print all single digit number
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	for (i = '0'; i < '10'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
