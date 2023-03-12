#include <stdio.h>

/**
 * main - Print all argumetns that this program recieves
 * @argc: number of arguments
 * @argv: array containing arguments strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
