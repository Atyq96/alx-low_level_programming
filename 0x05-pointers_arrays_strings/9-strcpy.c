#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 *
 * @dest: char string type
 * @src: char string type
 *
 * Return: Pointr to 'dest'
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (sec[i] != '\0');

	return (dest);
}
