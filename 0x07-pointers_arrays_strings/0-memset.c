#include "main.h"

/**
 *  *_memset - function fills the first n bytes of the memory.
 *  @s: pointer to put the constant
 *  @b: constant
 *  @n: max bytes to use
 *  Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; n > 0; num++, n--)
	{
		s[num] = b;
	}
}
	return (s);
}
