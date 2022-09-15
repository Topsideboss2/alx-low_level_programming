#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int ch, i;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			putchar(ch);
		}
	}
	_putchar('\n');
}
