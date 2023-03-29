#include <stdio.h>
#include <string.h>
/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If the number of characters is odd, the function should print (length - 1) / 2 of the string
 */

void puts_half(char *str)
{
int len = strlen(str);
int n = (len - 1) / 2;
if (len % 2 == 0)
{
int i = n;
for (; i < len; i++)
{
putchar(str[i]);
}
}
else
{
int i = n + 1;
for (; i < len; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}
