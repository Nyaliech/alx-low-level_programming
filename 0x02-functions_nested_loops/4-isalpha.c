#include "main.h"

/**
 * _isalpha - checks for alphabeti letters
 * @c is a letter to be checked if lower or uppercase
 * Return: 1 if c is a letter either lower or upper otherwise 0
 */
int _salpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
