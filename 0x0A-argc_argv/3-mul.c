#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if an error occured.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/*Check there are exactly two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/*convert command-line arguments to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Calculate the multiplication result */
	result = num1 * num2;

	/* Print the result*/
	printf("%d\n", result);

	return (0);
}
