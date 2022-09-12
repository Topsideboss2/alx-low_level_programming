#include <stdlib.h>
#include <std.io>
#include <time.h>

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

}

/**
 * main - Execute
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
