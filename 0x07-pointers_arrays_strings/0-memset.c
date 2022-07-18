#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 *
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
		*(s + z) =  b;
	return (s);
}
