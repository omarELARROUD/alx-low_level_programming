#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: number of arguments
 * @argv: array containing arguments strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

    int cents, coins = 0;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    coins += cents / 25;
    cents %= 25;

    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    coins += cents;

    printf("%d\n", coins);
    return 0;
}

