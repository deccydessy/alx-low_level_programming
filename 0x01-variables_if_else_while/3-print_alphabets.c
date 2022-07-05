#include <stdio.h>
/**
*main - Entry point
*Description: prints the alphabet in lowercase, and then in uppercase
* Return: (0)
*/
int main(void)
{
	char t, w;

	for (t = 'a'; t <= 'z'; t++)
	{
		putchar(t);
	}
	for (w = 'A'; w <= 'Z'; w++)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
