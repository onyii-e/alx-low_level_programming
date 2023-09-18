#include <stdio.h>

/**
 *  _puts - prints a strings, followed by a new line , to stdout
 *  @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
		putchar('\n');
	}
}
