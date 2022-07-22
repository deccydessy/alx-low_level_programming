#include <stdio.h>
/**
 *  main - Entry Point
 *  Description: all possible combinations of single-digit numbers
 *  Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num % 10 + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
