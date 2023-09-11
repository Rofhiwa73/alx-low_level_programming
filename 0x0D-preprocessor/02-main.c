#include <stdio.h>
#include <libgen.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	const char *path = __FILE__;
	const char *filename = basename((char *)path);

	printf("%s\n", filename);
	return (0);
}
