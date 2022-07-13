#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source
 * @n: amount of bytes used from src
 *
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int kwan = 0, kwan1 = 0;

	while (*(dest + kwan) != '\0')
	{
		kwan++;
	}
	while (kwan1 < n)
	{
		*(dest + kwan) = *(src + kwan1);
		if (*(src + kwan1) == '\0')
			break;
		kwan++;
		kwan1++;
	}
	return (dest);
}
