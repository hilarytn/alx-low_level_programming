#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int n = 0;
	int j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	p = malloc(n);

	if (p == NULL)
		return (NULL);

	for (j = 0; j < n; j++)

	{
		p[j] = 0;
	}

	return (p);
}
