#include "main.h"

/**
 * _strcmp - Compares pointers two strings.
 * @s1: pointer to the first string to be compared.
 * @s2: pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative.
 *    If str1 == str2, 0.
 * If str1 > str2, the positive.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
