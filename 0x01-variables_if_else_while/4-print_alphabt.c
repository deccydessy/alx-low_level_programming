#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints the alphabet in lowercase
 * Return: (0)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == 'e' || d == 'q')
			continue;
		putchar(d);
	}
	putchar('\n');
	return (0);
}
