#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 * Return: Always o (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	Printf("size of a char: %lu byte(s)\n", sizeof(a));
	Printf("size of an int: %lu byte(s)\n", sizeof(b));
	Printf("size of a long int: %lu byte(s)\n", sizeof(c));
	Printf("size of a long long int: %lu byte(s)\n", sizeof(d));
	Printf("size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
