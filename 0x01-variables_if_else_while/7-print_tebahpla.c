#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char l;
  
for (l = 'z'; l >= 'a'; l--)
{
putchar(l);
}
putchar('\n');
return (0);
}
