#include "main.h"

/**
 * void _puts - function that prints a string, in reverse.
 * @s: string to print.
 * Return: void.
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s++);
	}
	_putchar('\n');
}
