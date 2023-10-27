#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first sting
 * @s2: second string
 *
 * Return: 1 if true , 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
