#include "main.h"

/**
 * print_most_numbers - print number between 0 to 9
 * (neither 0 - 9)
 * Return: no return
*/
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 50; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
