#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * chunguza - compare every character in a string
 * @s: string
 * @a: iterator 1
 * @b: iterator 2
 * Return: always 0 success
 */

int chunguza(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + chunguza(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if string is palindrome
 * @s: string
 *
 * Return: 1 if s is a palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (chunguza(s, 0, _strlen_recursion(s) - 1));
}
