#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - create array
 * @s1: input
 * @s2: input
 * Return: poiter to char or null
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		size1++;
	}
	for (i = 0; s2[i]; i++)
	{
		size2++;
	}
	p = malloc(sizeof(char) * (size1 + size2) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			p[i] = s1[i];
		}
		for (i = size1; i < (sizeof(char) * (size1 + size2)); i++)
		{
			p[i] = s2[j];
			j++;
		}
		p[i] = '\0';
		return (p);
	}
}
