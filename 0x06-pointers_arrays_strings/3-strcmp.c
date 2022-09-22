#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int diff = 0;
	int len;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i <= j)
	{
		len = i;
	}
	else
	{
		len = j;
	}

	while (k <= len)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			diff = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (diff);
}
