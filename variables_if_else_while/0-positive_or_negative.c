#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is the entry point of the code
 *
 * Description: 'the program's description
 *
 * Return - 0 Successful
 */

/* main - Program entry point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

