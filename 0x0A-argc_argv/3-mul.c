#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array containing arguments strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
