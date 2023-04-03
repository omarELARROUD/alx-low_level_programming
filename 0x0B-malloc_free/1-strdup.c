#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - create array
 * @str: input
 * Return: pointer to the string or null
*/

char *_strdup(char *str)
{
	char *p;
	unsigned int size = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		size++;
	}
	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(p, str);
		return (p);
	}
}
