#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/*
 * main - print "is negative" when n < 0
 * when n > 0 print "is positive"
 * and when n-0 print "is zero"
 * Return: Always 0 (sucess)
/* betty style doc for function main goes there */
int main(void)

{
	int n;
	
	srand(time(0));
        n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	 {
	 putchar("is positive");
	 }
	if (n == 0)
	 {
	 putchar("is zero");
	 }
	if (n < 0)
	{
 	putchar("is negative");
	}
	return (0);

}
