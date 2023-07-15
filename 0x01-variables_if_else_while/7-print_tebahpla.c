#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - function
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char low;

	for (low = 'z'; low <= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
