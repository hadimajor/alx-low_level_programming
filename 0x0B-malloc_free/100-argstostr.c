#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments in the program
 *
 * @ac: counter of arguments
 * @av: vector of arguments
 *
 * Return: pointer to a new string, or NULL if it fails.
 * returns NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *ar;
	int i;
	int j;
	int k = 0;
	int n;
	int m;
	int counter = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;

		counter++;
	}
	counter++; /*to count for\n to be added later*/
	ar = malloc(sizeof(char) * counter);
	if (ar == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			ar[k] = av[n][m];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
