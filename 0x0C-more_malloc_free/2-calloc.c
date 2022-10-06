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
	int n;
	int j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < n; j++)

	{
		ptr[j] = 0;
	}

	return (ptr);
}
