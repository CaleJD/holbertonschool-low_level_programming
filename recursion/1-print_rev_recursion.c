#include "main.h"

/**
 * _puts_rev_recursion - Prints a string followed by a new line
 * @s: String to print
 */
 void _print_rev_recursion(char *s)
 {
	if (*s == '\0')
		return;
	
	_puts_recursion(s + 1);
	_putchar(*s);
}
