#include <stdio.h>

/**
 * main - print lowercase a-z
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putcahr('\n');

	return (0);
}

