#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
	int main(void)
{
	int na, nb;

	for (na = 0; na < 9; na++)
{
	for (nb = na + 1; nb < 10; nb++)
	{
	putchar((na % 10) + '0');
	putchar((nb % 10) + '0');

	if (na == 8 && nb == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
