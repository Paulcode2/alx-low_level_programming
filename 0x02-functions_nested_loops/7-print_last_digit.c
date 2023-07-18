#include "main.h"

/**
 * print_last_digit - prints the last digit of a set of numbers
 * @n: The numbers to be treated
 *
 * Return: Llast digit value.
 */
int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
