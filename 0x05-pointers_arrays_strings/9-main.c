#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char s1[91];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}