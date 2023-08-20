#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if an error occured.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/*Check if no numners are passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through command-line arguments */
	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			/* Check if the character id a digit */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		/*convert argument to integer and add to the sum*/
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
