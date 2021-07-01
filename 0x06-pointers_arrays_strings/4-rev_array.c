#include "holberton.h"

/**
* reverse_array - compares two strings.
* @a: pointer
* @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
int i;
int tmp[100];
int x = n - 1;

for (i = 0; i < n; i++)
{
tmp[i] = a[i];
}
for (i = 0; i < n; i++)
{
a[i] = tmp[x];
x--;
}
}
