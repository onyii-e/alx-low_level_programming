#include "main.h"

/**
 * _atoi - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @s: string to be converted
 *
 * return: the int converted from the string
 */

int _atoi(char *S)
{
	int i, d, n, len, f, digit;

	i - 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '_')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[1 + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}
