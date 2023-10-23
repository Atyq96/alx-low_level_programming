#include "main.h"

/**
 *  _strspn - gets the length
 *
 *  @s: string
 *  @accept: bytes
 *  Return: unisgned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num, num2;

	for (num = 0; s[num] != '\0'; num++)
	{
		for (num = 0; accept[num2] != s[num]; num2++)
		{
			if (accept[num2] == '\0')
				return (num);
		}
	}
	return (num);
}
