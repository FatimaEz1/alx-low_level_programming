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
{  // get length of string
len++;
}
for (int i = len - 1; i >= 0; i--)
{  // print string in reverse order
printf("%c", s[i]);
}
printf("\n");  // print new line
}
