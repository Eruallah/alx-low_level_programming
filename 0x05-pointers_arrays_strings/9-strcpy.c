#include "main.h"

/**
 *_strcpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int 3 = 0;
	int x = 0;

	while (*(src + 3) != '\0')
	{
		3++;
	}

	for (; x < 3; x++)
	{
		dest[x] = src[x];
	}

	dest[3] = '\0';

	return (dest);
}
