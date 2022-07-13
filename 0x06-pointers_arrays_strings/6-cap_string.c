#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: input string
 *
 * Return: the pointer to dest
 */


char *cap_string(char *a)
{
	int kwan = 0, b;
	int gawanya[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(a + kwan) >= 97 && *(a + kwan) <= 122)
		*(a + kwan) = *(a + kwan) - 32;
	kwan++;
	while (*(a + kwan) != '\0')
	{
		for (b = 0; b < 13; b++)
		{
			if (*(a + kwan) == gawanya[b])
			{
				if ((*(a + (kwan + 1)) >= 97) && (*(a + (kwan + 1)) <= 122))
					*(a + (kwan + 1)) = *(a + (kwan + 1)) - 32;
				break;
			}
		}
		kwan++;
	}
	return (a);
}
