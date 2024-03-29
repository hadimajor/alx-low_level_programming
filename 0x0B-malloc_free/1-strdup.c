#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space,
 * that contains a copy of string given as parameter.
 *
 * @str: the string to copy
 *
 * Return: A pointer to the duplicate string, NULL if insufficient memory,
 * or if @str is NULL.
 */

char *_strdup(char *str)
{
	char *ar;

	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);

	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}

	ar[j + 1] = 0;
	return (ar);
}
