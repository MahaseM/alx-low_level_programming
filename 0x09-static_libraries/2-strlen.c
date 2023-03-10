#include "main.h"

/**
 * _strlen - Length of a string
 * @s: input
 * Return: Length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
