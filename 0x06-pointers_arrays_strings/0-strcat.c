#include "main.h"

/**
 * _strcat - concatenates 2 strings,
 * @dest: first string
 * @src: second string
 * Return: string
 */

char *_strcat - concatenate 2 strings
{
int i = 0, j = 0;

while (dest[i] != '\0')
	i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}



