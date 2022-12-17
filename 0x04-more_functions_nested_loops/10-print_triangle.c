#include "main.h"

/**
 * print_triangle - prints a triangle of squares according paramater
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int start = 0, end = size, count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < end; count++)
		{
			while (start < end)
			{
				if ((start + count + 1) >= end)
					_putchar('#');
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			_putchar('\n');
		}
	}
}
