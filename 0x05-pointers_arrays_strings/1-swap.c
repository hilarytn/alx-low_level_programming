#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: An integer to swap
 * @b: Another integer to swap
 * @hldr: a value holder for a
 *             * Return: void
 *               */
void swap_int(int *a, int *b)
{
	int hldr;

	hldr = *a;
	*a = *b;
	*b = hldr;
}
