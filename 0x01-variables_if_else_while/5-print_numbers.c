#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: Always Success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10 + '0'));
	}
	putchar('\n');
	return (0);
}
