#include "main.h"

/**
 * _memset - program fills a block of memeory with a specific value
 * @s: starting address of memeory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: chnage arrays with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}

	return (s);
}
