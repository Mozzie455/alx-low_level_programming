#include <stdio.h>

/**
 * main - Prints_putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char output[] = "_putchar";

	while (i < 9)
	{
		fputchar(output[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
