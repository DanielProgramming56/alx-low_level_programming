#include "main.h"


/**
 * _isdegit - check if number are 0-9
 * @c: char to check
 * Return: 0 to 1
*/

int _isdegit(int c)
{
	if (c >= '0' && <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
