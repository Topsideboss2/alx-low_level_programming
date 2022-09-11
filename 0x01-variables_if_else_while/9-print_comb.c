#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Execute
 *
 * Return - always 0 (Success)
 *
 */
int main(void)
{
	int i, coma, nine;

	coma = ',';
	nine = '9';

	for (i = '0'; i <= '8'; i++)
	{
		putchar(i);
		putchar(coma);
	}
	putchar(nine);
	putchar('\n');
	return (0);
}
