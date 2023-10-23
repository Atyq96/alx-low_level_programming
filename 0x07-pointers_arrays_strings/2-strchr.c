#include "main.h"

/**
 * *_strchr - Returns a pointer to the first occurrence
 *
 * @s: pointer to put the constant
 * @c: constant
 *
 * Return: poiner to s  or NULL
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] >= '/0' ; num++)
	{
		if (s[itr] == c)
		{
			return (s + num);
		}
	}

	return ('\0');
}
