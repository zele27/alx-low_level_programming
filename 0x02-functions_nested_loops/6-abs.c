#include "main.h"

/**
 * _abs -complete absolute value of integer
 * @n: interger argument
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}

