#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - print_alph_etc
 *
 * Return: Always 0.
 */
void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
}
