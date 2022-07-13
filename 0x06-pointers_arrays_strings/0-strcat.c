#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int kwan = 0, kwan1 = 0;

	while (*(dest + kwan) != '\0')
	{
		kwan++;
	}
	while (kwan2 >= 0)
		{
			*(dest + kwan) = *(src + kwan2);
			if (*(src + kwan2) == '\0')
				break;
			kwan++;
			kwan2++;
		}
	return (dest);
}
