#include <stdio.h>

/**
 * main - Print the number of arguments
 *
 * @argc: number of arguments
 * @argv: array containing arguments strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
