#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str:input string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int count = 0, i;

while (count >= 0)
{

if (str[count] == '\0')
count++;
}
if (count % 2 == 1)
i = (count - 1) / 2;
else
i = (count - 1) / 2;
for (i++; i < count; i++)

putchar(str[i]);
putchar('\n');
}




