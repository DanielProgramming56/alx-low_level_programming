#include "main.h"

/**
 * _strlen - print the lenght of a string
 * @s: the parameter of the fumction
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
