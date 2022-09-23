#include "main.h"

/**
 * print_square - prints a square of #'s given size
 * @size: size to draw
 */

void print_square(int size)
{
int row, column;

if (size > 0)
{
for (row = 1; <= size; row++)
{
for (column = 1; column <= size; column++)
{
_puthar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}


