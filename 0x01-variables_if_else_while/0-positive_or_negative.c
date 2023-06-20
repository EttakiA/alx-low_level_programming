#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A C progam that printswith printf function.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	float  n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%f is positvie\n", n);
	else if (n == 0)
		printf("%f is zero\n", n);
	else
		printf("%f is negative\n", n);
	return (0);
}
