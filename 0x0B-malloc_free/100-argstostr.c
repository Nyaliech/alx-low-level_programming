#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *kata;
	int a, b, j, jks;

	if (ac == 0)
		return (NULL);
	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);
		for (j = 0; av[b][j] != '\0'; j++)
			a++;
		a++;
	}
	kata = malloc((a + 1) * sizeof(char));
	if (kata == NULL)
	{
		free(kata);
		return (NULL);
	}
	for (b = j = jks = 0; jks < a; j++, jks++)
	{
		if (av[b][j] == '\0')
		{
			kata[jks] = '\n';
			b++;
			jks++;
			j = 0;
		}
		if (jks < a - 1)
			kata[jks] = av[a][j];
	}
	kata[jks] = '\0';
	return (kata);
}
