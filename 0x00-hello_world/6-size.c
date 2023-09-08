#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 * Return: Always 0 (Success)
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
	Printf("size of a long int: %lu byte(s)", sizeof(c));
	Print("size of a long long int: %lu byte(s)\n", sizeof(d));
	Print("size of a float: %lu byte(s)\n", sizeof(e));
	return (0)
}
