#include <stdio.h>

/**
 * main - prints all combinations of single-digits
 * Return: Alway 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(0);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}

