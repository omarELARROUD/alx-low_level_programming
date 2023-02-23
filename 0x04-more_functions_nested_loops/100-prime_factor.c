#include <stdio.h>

/**
 * main - the fizz buzz program
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long maxPrime = -1;
	int i;

	while(num%2 == 0)
	{
		maxPrime = 2;
		num /= 2;
	}
	while(num%3 == 0)
	{
		maxPrime = 3;
		num /= 3;
	}
	for(i=5; i<= sqrt(num); i+=6)
	{
		while(num%i == 0)
		{
			maxPrime = i;
			num/=i;
		}
		while(num%(i+2) == 0)
		{
			maxPrime = i+2;
			num/=(i+2);
		}
	}
	if (num>4)
	{
		maxPrime = num;
	}
	printf("%ld\n", maxPrime);
	return (0);
}
