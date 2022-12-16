#include "main.h"

/**
 * print_triangle - prints a triangle of squares according paramater
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; i++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1);
			_putchar('\n');
	}
	_putchar('\n');
}
