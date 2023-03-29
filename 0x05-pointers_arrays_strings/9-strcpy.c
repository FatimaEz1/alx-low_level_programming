#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copie the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: the destination.
 * @src: the source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
