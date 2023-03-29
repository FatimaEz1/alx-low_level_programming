#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string, followed by a new line,
 * @str: pointer that prints the string
 * Return: void
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
