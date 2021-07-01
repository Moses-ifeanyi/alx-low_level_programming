#include "holberton.h"

/**
* cap_string - capitalizes all words of a string.
* @x: pointer.
* Return:  a pointer to the destination string x.
*/

char *cap_string(char *x)
{
int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};

int i, j;

for (i = 0; x[i] != '\0'; i++)
{
if (x[0] >= 97 && x[0] <= 122)
{
x[0] = x[0] - 32;
}
for (j = 0; j < 14; j++)
if (x[i] >= 97 && x[i] <= 122 && x[i - 1] == symb[j])
x[i] = x[i] - 32;
}
return (x);
}
