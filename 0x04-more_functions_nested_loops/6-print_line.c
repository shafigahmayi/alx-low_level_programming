#include "main.h"
#include <stdio.h>

/**
 * print_line - print astraight line
 * @n: number of times "_" should be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');
}
