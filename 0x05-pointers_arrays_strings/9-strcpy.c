#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by src
 * including the terminanting null byte (\0)
 * to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int kwan = 0;

	while (kwan >= 0)
	{
		*(dest + kwan) = *(src + kwan);
		if (*(src + kwan) == \'0')
			break;
		kwan++;
	}
	return (dest);
}
