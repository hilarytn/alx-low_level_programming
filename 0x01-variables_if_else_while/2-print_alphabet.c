#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point 
 *
 *Return -always return 0
 *
 */
int main(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
		putchar(a_z);
	putchar('\n');
	return (0);
}
