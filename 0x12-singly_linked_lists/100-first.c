#include <stdio.h>

/**
 * before_main - Function to be executed before mai .
 * __attribute__((constructor)) ensures this function is called before main.
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

