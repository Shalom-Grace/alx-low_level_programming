#include "main.h"


/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: string input
 *
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
