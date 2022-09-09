#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print text
 *
 * Return: Always successful if 0
 */
int main(void)
{
	int n;
	char last() = "Last digit of";


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is", Last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n", n, n, % 10);
	}
	else if (n % 10 == 0)
	{
		printf("0\n", n, n, % 10);
	}
	else
	{
		printf("less than 6 and not 0\n", n, n, % 10);
	}
	
	return (0);
}
