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
	int che;

	for (che = '0'; che <= '9'; che++)
	{
	putchar(che);
	}
	for (che = 'a'; che <= 'f'; che++)
	{
	putchar(che);
	}
	putchar('\n');
	return (0);
}

