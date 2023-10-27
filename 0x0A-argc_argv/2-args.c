#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of commadline arguments
 * @argv: pointer to an array of command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
