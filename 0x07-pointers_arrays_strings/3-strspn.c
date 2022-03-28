#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String where substring will look.
 * @accept: Substring of accepted chars.
 * Return: Length of occurrence.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[i]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
