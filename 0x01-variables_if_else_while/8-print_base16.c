#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	int n;
	char low;

	for (n = 0; n < 10; n++)
	putchar(n);

	for (low = 'a'; low <= 'f'; low++)
	{
	putchar(low);
	putchar('\n');
	}

	return (0);
}
