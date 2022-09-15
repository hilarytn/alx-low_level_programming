#include "main.h"

/**
 * more_numbers - print numbers 1-14 10x
 *
 * main - entry point
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
	return;
}
