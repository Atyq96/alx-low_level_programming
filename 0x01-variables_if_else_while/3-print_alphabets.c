#include <stdio.h>
/**
* main - print prints the alphabet in lowercase, and then in uppercase
*
* Description: using the main function
* this program prints "3. alphABET"
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
