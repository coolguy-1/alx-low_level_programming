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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
			printf("%d and is greater than 5);
	}
	
	else if (n < 5)
	{
		printf("%d and is less than 6 and not 0");
	}
	else
	{
		printf("0 and is 0");
	return (0);
}
