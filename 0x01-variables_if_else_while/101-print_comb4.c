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
	int na, nb, nc;

	for (na = 0; na < 8; na++)
	{
	for (nb = na + 1; nb < 9; nb++)
	{
	for (nc = nb + 1; nc < 10; nc++)
	{
		putchar((na % 10) + '0');
			putchar((nb % 10) + '0');
		putchar((nc % 10) + '0');
	if (na == 7 && nb == 8 && nc == 9)
		continue;
	{
		putchar(',');
		putchar(' ');
	}
}
}
}
	putchar('\n');

return (0);
}
