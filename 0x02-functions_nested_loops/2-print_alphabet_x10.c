#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10X
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char c;

	while (x <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		x++;
	}
}
