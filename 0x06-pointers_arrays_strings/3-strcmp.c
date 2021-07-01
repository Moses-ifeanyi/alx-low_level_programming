#include "holberton.h"

/**
* _strcmp - compares two strings.
* @s1: string 1
* @s2: string 2
* Return: an integer.
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
char r = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
{
r = s1[i] - s2[i];
}
if (s1[i] != s2[i])
{
r = s1[i] - s2[i];
break;
}
i++;
}
return (r);
}
