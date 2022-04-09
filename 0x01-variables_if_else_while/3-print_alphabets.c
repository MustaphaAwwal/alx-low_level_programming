#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, 
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	return (0);
}
