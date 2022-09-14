#include "main.h" 

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	_putchar('\n');
}
