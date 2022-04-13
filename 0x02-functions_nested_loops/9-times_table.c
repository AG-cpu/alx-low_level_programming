#include "main.h"

/**
 * times_table - Prints 9 times table.
 */
void times_table(void)
{
	int ns, nm, res;

	for (ns = 0; ns <= 9; ns++)
{

	_putchar('0');

	for (nm = 1; nm <= 9; nm++)
	{
	_putchar(',');
	_putchar(' ');

	res = ns * nm;

	if (res <= 9)
	{
	_putchar(' ');
	}
	else
	{
	_putchar((res / 10) + '0');
	_putchar((res % 10) + '0');
	}
	}
_putchar('\n');
}
}
