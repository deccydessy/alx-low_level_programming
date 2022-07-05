#include <stdio.h>
/**
 * main -Entry point
 * Description:  program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
