#include "main.h"

/**
 * _isupper - chech if para,ater is an uppercase chaeacter
 * @c: input character
 * Return: 1 if is an uppercase charcter, 0 in other case
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
