#include "main.h" 

/**
 * main - Prints_putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char p[] = "_putchar";
	
	for (i= 0;i < 9; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
