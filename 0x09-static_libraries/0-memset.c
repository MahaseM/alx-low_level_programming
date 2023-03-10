#include "main.h"

/**
 * _memset - Fill a block of memory with a certain value
 * @s: Starting address to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 * Return: Changed array with the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
