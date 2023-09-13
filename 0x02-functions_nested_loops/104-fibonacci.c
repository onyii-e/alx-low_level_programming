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

	Printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		if (i != 98)
			Printf("%lu, ", next);
		else
			Printf("%lu\n", next);
		a = b;
		b = next;
	}

	return (0);
}


