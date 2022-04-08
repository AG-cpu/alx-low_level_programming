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

	che = 'a';

	for (che != 'q'; che <= 'z'; che++)
	{
	putchar(che);
	}
	for (che != 'e'; che <= 'Z'; che++)
	{
	putchar(che);
	}
	putchar('\n');
	return (0);
}

