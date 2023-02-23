#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int n;
	int d;

	for (n = '0'; n <= '9'; n++)
	{
	for (d = n + 1; d <= '9'; d++)
	{
	if (d != n)
	{
	putchar(n);
putchar(d);
if (n == '8' && d == '9')
	continue;
putchar(',');
putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
