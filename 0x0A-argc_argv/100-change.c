#include <stdio.h>
#include <stdlib.h>
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
	int cents, coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
	int i;

	/*Check number of arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/*Convert the argument to integer*/
	cents = atoi(argv[1]);

	/*Check if the input is negetive*/
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/*Calculate the min number of coins*/
	for (i = 0; i < num_coins; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	/*Print the min number of coins*/
	printf("%d\n", coins);
	return (0);
}
