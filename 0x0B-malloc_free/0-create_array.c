#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *hilary;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	hilary = malloc(sizeof(char) * size);
	if (hilary == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hilary[i] = c;

	return (hilary);
}
