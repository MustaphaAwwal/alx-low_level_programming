#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/*
 * main - print "is negative" when n < 0
 * when n > 0 print "is positive"
 * and when n-0 print "is zero"
 * Return: Always 0 (sucess)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
	 {
	printf("98 is positive\n");
	}
	if (n == 0)
	{
	printf("0 is zero\n");
	}
	if (n < 0)
	{
 	printf("-98 is negative \n");
	}
	return (0);

}
