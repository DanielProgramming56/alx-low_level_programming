#include "main.h"

/**
 * print_diagonal - prints digonal line n times.
 * @n: times diagonal line is printed
 * Return: no return
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
