#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char aA_zZ;

	for (aA_zZ = 'a'; aA_zZ <= 'z'; aA_zZ++)
		putchar(aA_zZ);
	for (aA_zZ = 'A'; aA_zZ <= 'Z'; aA_zZ++)
		putchar(aA_zZ);
	putchar('\n');
	return (0);
}
