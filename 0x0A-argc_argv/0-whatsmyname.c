#include <stdio.h>

/**
 * main - Prints the name of the executable file
 * @argc: Argument count
 * @argv: array of argument strings
 *
 * Return: 0 for successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
