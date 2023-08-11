#include <stdlib.h>
#include <time.h>
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
	if (n > 0){
		printf("%d is greater than 0);
	}
	else if (n < 0){
		printf("%d is less than 0);
	}
	else {
		printf("0 is zero");
	}
	return (0);
}
