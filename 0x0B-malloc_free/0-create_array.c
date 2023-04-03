#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array
 * @size: input
 * @c: input
 * Return: pointer or null
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	p = malloc(sizeof(char) * size);
	if (p == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
		return (p);
	}
}
