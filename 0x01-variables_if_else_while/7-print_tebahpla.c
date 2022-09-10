#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char z_a;

	for (z_a = 'z'; z_a >= 'a'; z_a--)
	{
		putchar(z_a);
	}
	putchar('\n');
}
