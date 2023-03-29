#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int rand = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		rand = rand() % 128;
		if ((c + rand) > 2772)
			break;
		c = c + rand;
		printf("%c", rand);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
