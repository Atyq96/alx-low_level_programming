#include <stdlib.h>
#include <time.h>
/**
* main - print last degit and compare
*
* Description: using the main function
* this program prints "The last digit"
* Return: 0
*/
int main(void)
{
int n;
int LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
LastDigit = n % 10;

if (LastDigit > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n", n, LastDigit);
}
else if (LastDigit == 0)
{
	printf("Last digit of %i is %i and is 0\n", n, LastDigit);
}
else if (LastDigit < 6)
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LastDigit);
}
return (0);
}
