#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d", n, lastDigit);
	if (n > 5)
	{
		printf("Last digit of 98 is 8 and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("Last digit of 980 is 0 and is 0\n");
	}
	else
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
	}
	return (0);
}
