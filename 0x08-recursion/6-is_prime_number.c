#include "main.h"
#include <stdio.h>

/**
 * is_prime_number  - check if the int is prime
 * @othrn: int
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check number if its devided
 * @n: in
 * @othrn: int
 * Return: int
 */

int check_prime(int n, in othrn)
{

if (othrn >= n && n > 1)
	return (1);
else if (n % othrn == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, othrn + 1));
}
