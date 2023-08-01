#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where memory is store
 * @src: whwre memory is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; i++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
