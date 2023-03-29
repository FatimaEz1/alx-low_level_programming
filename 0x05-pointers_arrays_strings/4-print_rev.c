#include "main.h"
#include "stdio.h"
/**
 * print_rev - print a string in reverse, followed by a new line.
 * @s: string.
 * Return: no return.
 */
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (len--; len >= 0; len--)
{
printf("%c", s[len]);
}
printf("\n");
}
