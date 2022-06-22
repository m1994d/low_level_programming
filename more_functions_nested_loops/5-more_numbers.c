#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * Return:  Always 0
 */

void more_numbers(void)
{
	int row, col;

	row = 0;
	for (col = 0; col <= 9; col++)
	{
		while (row <= 14)
		{
			if (row >= 10)
				_putchar(1 + '0');
			_putchar((row % 10) + '0');
			row++;
		}
		_putchar('\n');
		row = 0;
	}
}
