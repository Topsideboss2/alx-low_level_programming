#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplues two numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 **/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print("Error\n");
		return (1);
	}
	printf("%d\n", (argv[1]) * (argv[2]));
	return (0);
}
