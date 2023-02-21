#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: The character to check
 * Return: 1 if lowercase return 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
