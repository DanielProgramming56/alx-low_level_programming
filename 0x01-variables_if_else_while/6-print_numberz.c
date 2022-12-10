#include <stdio.h>
/**
 * main - prints single digit in base 10
 * Return: Always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + 'o');

	putchar('\n');

	return (0);
}
