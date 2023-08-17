#include <stdio.h>
#include <math.h>

/**
 * main -  Prints the largest prime factor of 612852475143.
 *
 * Return: Always 0(Success).
 */
int main(void)
{
	long number = 612852475143;
	long i, maxf;
	double square = sqrt(number);

	for (i = 0; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxf = number / i;
		}
	}
	printf("%ld", maxf);
	return (0);
}
