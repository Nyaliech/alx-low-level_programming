#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @z: input string
 * 
 * Return: the pointer to dest
 */


char *rot13(char *z)
{
	int kwan = 0, a;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(z + kwan) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(z + kwan) == alphabet[a])
			{
				*(a + kwan) = rot13[a];
				break;
			}
		}
		kwan++;
	}
	return (z);
}
