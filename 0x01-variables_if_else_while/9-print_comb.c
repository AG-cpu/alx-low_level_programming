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
	int com;

	for (com = 0; com <= 9; com++)
{
	putchar((com % 10) + '0');
	if (com == 9)
		continue;		
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
