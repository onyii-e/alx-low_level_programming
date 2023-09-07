#include <stdio.h>
/**
 * main - A program that prints the size 
 * Return: 0 (Success)
 */
int main(void)
{
	print("size of a char: %d byte(s)\n", sizeof(char));
	print("size of an int: %d byte(s)\n", sizeof(int));
	print("size of a long int: %d byte(s)\n", sizeof(long int));
	print("size of a long long int: %d byte(s)\n", sizeof(long long int));
	print("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
