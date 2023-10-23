#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the sum of the two diagonals of a square matrix of integers.
 *
 * @a:
 * @size:
 *
 * Return: 
 */

void print_diagsums(int *a, int size)
{
	int num, sum1 = 0, sum2 = 0;

	for (num = 0; num < size; num++)
	{
		sum1 += a[num];
		sum2 += a[size - num - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
