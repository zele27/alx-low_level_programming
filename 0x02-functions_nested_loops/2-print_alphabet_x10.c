#include "main.h"

/**
 * print_alphabet_x10 - prints the lower alphabet 10 times
 * Description: program that prints alphabet in lowercase 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alpha;
	int i = 0;

	while (i <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		_putchar(alpha);
	}
	_putchar('\n');

	i++;

}


