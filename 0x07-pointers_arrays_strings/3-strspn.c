#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
for (i = 0; s[i]; i++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}

