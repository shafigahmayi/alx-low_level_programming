#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print number from 0 to 9
 * Description: it is easier now
 * Return: always 0
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
