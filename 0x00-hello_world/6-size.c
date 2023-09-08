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

	Printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	Printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	Printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	Print("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	Print("size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
