#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0, j = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1])
		lens1++;

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		l = lens1 + lens2;
	else
		l = lens1 + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= lens1)
		{
			str[j] = s2[lens2];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
