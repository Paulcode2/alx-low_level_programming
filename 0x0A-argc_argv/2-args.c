#include "main.h"
#include <stdio.h>
/**
 * main - prints all arg
 * @argc: counter
 * @argv: vector
 * ReturnL Always zero
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
