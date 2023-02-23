#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{

	for (p = '0'; p <= '9'; p++)
	{

	for (q = '0'; q <= '9'; q++)
	{
	if ((p != d) != q)
	{
		putchar(d);
		putchar(p);
		putchar(q);
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
