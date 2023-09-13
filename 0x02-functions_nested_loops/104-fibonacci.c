#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{

	unsigned long int a = 1, b = 2, next;
	int i;

	printf("%lu, %lu",  a, b);
	for (i = 3; i <= 97; i++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}


