#include <stdio.h>
/**
 * main - print  prints the alphabet in lowercase
 *
 *  * Description: using the main function
 * this program prints "When I was having that alphabet soup"
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
