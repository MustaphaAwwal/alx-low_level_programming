#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check andd confirm
 * @c: to be checked
 * Return: always success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
