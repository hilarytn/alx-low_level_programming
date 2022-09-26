#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i])
	{
		i++;
	}

	while (j <= i)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
		j++;
	}

	return ('\0');
}
