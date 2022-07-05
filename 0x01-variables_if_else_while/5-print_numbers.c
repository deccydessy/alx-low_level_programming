#include <stdio.h>
/**
 * main - Entry point
 * Description:program that prints all single digit numbers of base 10 starting
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
