#include "main.h"

/**
 * _isalpha - find if it a letter.
 * @c: The cheacking proc..
 * Return: 1 = lettet  0 if not.
 */

	int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
