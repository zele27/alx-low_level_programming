#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: input string.
 *Return: 0
 */
void put_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 ==1)
		i = (count - 1) / 2;

	for (i++; i <count; i++)
		_putchar('\n');
}




