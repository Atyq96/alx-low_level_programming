#include "main.h"

/**
 * *_strpbrk - nction locates the first occurrence in the string
 *
 * @s: string
 * @accept: bytes
 *
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int num, nt;
	char *p;

	num = 0;
	while (s[num] != '\0')
	{
		nt = 0;
		while (accept[nt] != '\0')
		{
			if (accept[nt] == s[num])
			{
				p = &s[num];
				return (p);
			}
			nt++;
		}
		num++;
	}

	return (0);
}
