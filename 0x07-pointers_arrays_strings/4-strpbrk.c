#include "main.h"

/**
 * _stpbreak - finds firstmatching char in string
 * @s: input string to search for matching char
 * @accept: chracters that could be matched
 * Returned: pointer to matching char
 */

char *_strbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
for (j = 0; accpet[j] != '\0'; j++)
if (s[i] == accept[j])
goto exist;
exit: return (s[i] != '\0' ? s + i : '\0');
}

