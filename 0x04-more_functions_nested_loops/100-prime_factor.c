#include <stdio.h>

/**
 * main - print lsrgest prime facteor
 * Return: Always 0.
*/

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fq--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
