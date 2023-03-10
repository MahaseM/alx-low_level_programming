#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to be changed
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
