#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s != '\0') /* base case */
    {
        putchar(*s);
        _puts_recursion(s + 1);
    }
    else /* recursive case */
    {
        putchar('\n');
    }
}
