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
	unsigned int num, nt;

	for (num = 0; s[num] != '\0'; num++)
	{
		for (nt = 0; accept[nt] != s[num]; nt++)
		{
			if (accept[nt] == '\0')
				return (num);
		}
	}
	return (num);
}
