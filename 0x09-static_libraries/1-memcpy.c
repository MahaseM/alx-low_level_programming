#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Memory storage
 * @src: Memory copy
 * @n: Number of bytes
 * Return: Copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
