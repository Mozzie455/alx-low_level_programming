#include "main.h"

/**
 * * print_times_table - Print the n times table
 *
 * @n: number times table table (0 < n<= 15)
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int a, b, op;

	if (n > 15 || n < 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				op = a * b;
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (op <= 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((op % 10) + '0');
				}
				else if (op > -10 && op < 100)
				{
					_putchar(' ');
					_putchar((op / 10) + '0');
					_putchar((op % 10) + '0');
				}
				else if (op > 100 && j != 0)
				{
					_putchar((op / 100) + '0');
					_putchar((op / 10) % 10 + '0');
					_putchar((op % 10) + '0');
				}
				else
					 _putchar((op % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
