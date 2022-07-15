#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 *
 * Return: the pointer to dest
 */


char *rot13(char *s)
{
	int kwan = 0, a;
	char alphabet[] = "abcdefghijklmnopqrstuvwxysABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxysabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + kwan) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + kwan) == alphabet[a])
			{
				*(a + kwan) = rot13[a];
				break;
			}
		}
		kwan++;
	}
	return (s);
}
