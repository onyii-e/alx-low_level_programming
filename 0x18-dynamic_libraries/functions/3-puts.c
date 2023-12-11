#include "main.h"

/**
 * _puts - program prints a string to stdout
 * @str: the string to be printed
 * _putchar printed a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
