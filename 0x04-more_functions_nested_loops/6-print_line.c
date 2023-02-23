#include "main.h"
/**
 * print_line - draws a straight line n times
 * @n: number of times straight line is printed
 * Return: No return
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
