#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This code prints a rand number and stores it in n
 * Return: o
 */
int main(void)
{
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;

	printf("Last digit of %d is %d ", n, s);
	if (s > 5)
		printf("and is greater than 5\n");

	else if (s < 6 && s != 0)
		printf("and is less than 6 and not 0\n");

	else if (s == 0)
		printf("and is 0\n");
	return (0);
}
