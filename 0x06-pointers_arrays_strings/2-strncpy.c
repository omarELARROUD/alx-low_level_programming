#include "main.h"

/**
 * *_strncpy - entry point
 *
 * @dest: destination string
 * @src: string to be concat to dest
 * @n: given int
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
