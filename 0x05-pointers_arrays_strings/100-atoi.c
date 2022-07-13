#include "main.h"

/**
 * _atoi - coverts string into integer
 * @s: input string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int kwan = 0, kiasi = 0, a = 0, b = 1, c = 1, d;

	while (*(s + kwan) != '\0')
	{
		if (kiasi > 0 && (*(s + kwan) < '0' || *(s + kwan) > '9'))
		{
				break;
	}
				if (*(s + kwan) == '-')
				b *= -1;
				if ((*(s + kwan) >= '0') && (*(s + kwan) <= '9'))
				{
				if (kiasi > 0)
				c *= 10;
				kiasi++;
				}
				kwan++;
				}
				for (d = kwan - kiasi; d < kwan; d++)
				{
				a = a + ((*(s + d) - 48) * c);
				c /= 10;
				}
				return (a * b);
				}
