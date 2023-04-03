#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[pos++] = av[i][j];
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}
