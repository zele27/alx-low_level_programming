#include "main.h"

/**
 * _strstr - returns pointer to first char of matching substring
 * @haystak: string to find substring in
 * @needle: substring to find match
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
Int k;

while (*haystack != '\0')
{
k = 0;
while (*haysatck == *needle && *haystack != '\0' && *needle != '\0')
haystack++' needle++, k++;
if (*needle == '\0')
return (haystack -k);
haysatck -= (k -1), needle -= k;
}
return ('\0');
}


