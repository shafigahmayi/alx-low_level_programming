#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 * Description: do not for get your not sign
 * Return: as usual 0
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
