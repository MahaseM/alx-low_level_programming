#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
