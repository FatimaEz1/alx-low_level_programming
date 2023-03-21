#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the alphabet, in lowercase,
 *
 * print_alphabet is a function that prints the lowercase alphabet followed by a newline character using _putchar twice.
*/

void print_alphabet(void) 
    {
    	char c;

    	for (c = 'a'; c <= 'z'; c++) {
        	_putchar(c);
    }

    _putchar('\n');
}
