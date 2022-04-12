#include "main.h"
/**
*  print_alphabet_x10 - print a-j.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int count = 0;

	char let;

while (count++ <= 9)
{
	for (let = 'a'; let <= 'z'; let++)
	{
	_putchar(let);
	}
	_putchar('\n');
}
}
