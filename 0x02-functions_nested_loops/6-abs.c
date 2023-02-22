#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @a: the integer to compute its absolute value
 * Return: retus abs value
 *
 */
int _abs(int a)
{
	int absvalue;

	if (a < 0)
	{
		absvalue = -a;
	}

	else
	{
	absvalue = a;
	}
	return (absvalue);
}
