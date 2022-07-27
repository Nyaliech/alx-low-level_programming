#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *neno;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	neno = (char *)malloc(sizeof(char) * (a + 1));
	if (neno == NULL)
		return (NULL);
	for (b = 0; b <= a; b++)
		neno[b] = str[b];
	return (neno);
}
