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
void print_array(int *a, int n) {
int i = 0;
for (; i < n; i++)
{
printf("%d", a[i]);
if (i != n-1)
{
printf(", ");
}
}
printf("\n");
}
