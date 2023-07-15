#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */
/**
 * main - main function
 *
 * Return: Always (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++);
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++);
	putchar(low);
	putchar('\n');

	return (0);
}
