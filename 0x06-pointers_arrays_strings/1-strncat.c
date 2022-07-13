#include "main.h"
#include <stdio.h>

/**
 * _strncat -> function to append some charx
 * @desk: first param
 * @src: second param
 * @n: 3rd param
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
