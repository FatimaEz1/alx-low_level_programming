#include "main.h"
#include "stdio.h"
/**
 * rev_string - reverse a string.
 * @s:  string.
 * Return: no return.
 */
void rev_string(char *s)
{
int len = 0, i = 0;
char tmp;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}
