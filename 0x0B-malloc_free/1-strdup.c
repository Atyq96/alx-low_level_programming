#include "main.h"

/**
 * *_strdup - return a pointer to a new allocated space
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0m size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++);

	m = malloc(size * sizeif(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{	
		for (; i < size; i++)
			m[i] = str[i];
	}

	return (m);
}