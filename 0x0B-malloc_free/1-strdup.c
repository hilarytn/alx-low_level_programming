#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *allocated;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		j++;

	allocated = malloc(sizeof(char) * j + 1);

	if (allocated == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		t[i] = str[i];

	return (j);

}
