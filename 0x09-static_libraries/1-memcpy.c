#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory
 * @dest: memory area
 * @src: source
 * @n: length pf src to  be copied
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
