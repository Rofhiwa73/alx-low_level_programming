#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* generate_password - fumction to generate a random password. */

void generate_password(int leng)
{
	char possibleChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
	char password[leng+1];

	srand(time(0)); /* seed for random number generation */
	for (int i = 0; i < leng; i++)
	{
		int randomIndex = rand() % (sizeof(possibleChars) - 1);
		password[i] = possibleChars[randomIndex];
	}

	password[leng] = '\0'; /* null terminates the string */
	printf("The randomly generated password is: %s\n", password);
}

int main()
{
	int leng = 10; /* desired length of password */
	generate_password(leng);
	return 0;
}
