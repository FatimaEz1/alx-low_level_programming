#include "main.h"
#include <stdio.h>

/**
 * int _strlen - returns the length of a string
 *
 * @*s: string to return its lenght.
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return len;
}
