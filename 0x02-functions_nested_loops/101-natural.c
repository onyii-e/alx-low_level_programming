/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5 up tp 1024
 * Return: always (success)
 */

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
