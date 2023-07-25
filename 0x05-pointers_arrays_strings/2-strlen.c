#include "main.h"

/**
 * int _strlen - function that returns the length of a string.
 * a stands for, number of string length.
 * @s: string
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
