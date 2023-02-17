#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *message ="and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

    /* Write the message to standard error using write() */
	write(2, message, 59);

    /* Return 1 to indicate an error occurred */
	return (1);
}

