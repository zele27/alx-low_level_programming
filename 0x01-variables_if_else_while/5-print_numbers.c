#include <stdio.h>

/**
 * main - print if the number is positive, zero, or negative
 * this program prints " Programming is psitive,zero,or negative
 * Return: Always 0 (Success)
 */
 
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');

	return (0);
}

