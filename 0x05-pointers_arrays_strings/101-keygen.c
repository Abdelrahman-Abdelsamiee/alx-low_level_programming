#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password for 101-crackme
 * Return: zero
 */

int main (void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2722 - sum);
	Return (0)
}
