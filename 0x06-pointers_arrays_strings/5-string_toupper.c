#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @a: inputs string
 *
 * Return: Always 0
 */

char *string_toupper(char *a)
{
	int kwan = 0;

	while (*(a + kwan) != '\0')
	{
		if ((*(a + kwan) >= 97) && (*(a + kwan) <= 122))
			*(a + kwan) = *(a + kwan) - 32;
		kwan++;
	}
	return (a);
}
