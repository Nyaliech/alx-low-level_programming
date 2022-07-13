#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: input string
 *
 * Return: the pointer to dest
 */

char *leet(char *a)
{
	int kwan = 0, b;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(a + kwan) != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (*(a + kwan) == low_letters[a] || *(a + kwan) == upp_letters[b])
			{
				*(a + kwan) = numbers[b];
				break;
			}
		}
		kwan++;
	}
	return (a);
}
