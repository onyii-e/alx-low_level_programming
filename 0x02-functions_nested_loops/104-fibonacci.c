#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * purpose- no hardcode
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, next;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		if (i != 98)
			printf("%lu, ", next);
		else
			printf("%lu\n", next);
		a = b;
		b = next;
	}

	return (0);
}


