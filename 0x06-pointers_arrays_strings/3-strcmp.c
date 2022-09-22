#include "main.h"
#include <stdio.h>

 /**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}


#include "main.h"

/**
 *   * _strncat - Concatenates two strings
 *     * @dest: The destination value
 *       * @src: The source value
 *         * @n: The limit of the concatenation
 *           *
 *             * Return: A pointer to the resulting string dest
 *               */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}

#include "main.h"

/**
 *   * _strncpy - Copy a string
 *     * @dest: The destination value
 *       * @src: The source value
 *         * @n: The copy limit
 *           *
 *             * Return: char value
 *               */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;


	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

#include "main.h"

/**
 *   * string_toupper - Changes all lowercase letters to uppercase
 *     * @p: The string will be modified
 *       *
 *         * Return: char var
 *           */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}

#include "main.h"

/**
 *   * _strcmp - Compares two strings
 *     * @s1: The first string
 *       * @s2: The second string
 *         *
 *           * Return: int value
 *             */
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
