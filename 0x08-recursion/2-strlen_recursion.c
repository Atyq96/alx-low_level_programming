#include "main.h"

/**
 * _strlen_recursion - prints the length of the string s
 * @s: pointer to the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int nt = 0;

if (*s > '\0')
{
	nt += _strlen_recursion(s + 1) + 1;
}

return (nt);
}
