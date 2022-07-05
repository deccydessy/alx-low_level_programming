#include <stdio.h>
/**
 * main - Entry point
 * Description:program that prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
