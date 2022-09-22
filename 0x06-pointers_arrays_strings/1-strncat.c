#include "main.h"

/**
 * _strncat - concatinate 2 string
 * @dest: first string
 * @src: second string
 * @n: the number f bytes to use from src
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, k = 0;

while (dest[i] != '\n')
i++;

while (src[k] != '\0' && n > k)
{
dest[i] = src[k];
k++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}

return (dest);
}

