#include "main.h"

/**
 * _strncat -> function to append some charx
 * @desk: first param
 * @src: second param
 * @n: 3rd param
 * Return: string
 */
char *_strncat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index + 0; src[index]; index++)
		dest[dest_len++] = src[index];
	
	return (dest);
}
