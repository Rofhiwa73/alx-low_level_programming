#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_PASSWORD_LENGTH 100

/* generate_password - fumction to generate a random password. */

void generate_password(int leng)
{
	int i;
	char possibleChars[] = "abcdefghijklmnopqrstuvwxyz"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"0123456789"
			"!@#$%^&*()";
	char password[MAX_PASSWORD_LENGTH];

	srand(time(0)); /* seed for random number generation */
	for (i = 0; i < leng; i++)
	{
		int randomIndex = rand() % (sizeof(possibleChars) - 1);
		password[i] = possibleChars[randomIndex];
	}

	password[leng] = '\0'; /* null terminates the string */
	printf("The randomly generated password is: %s\n", password);
}

int main()
{
	int leng = 15;
	generate_password(leng);
	return 0;
}
