#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *copyStr;
	int a, b;

	a = 0;
	b = 0;
	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	copyStr = (char *)malloc((a + 1) * sizeof(char));
	if (copyStr == NULL)
	{
		return (NULL);
	}
	while (str[b] != '\0')
	{
		copyStr[b] = str[b];
		b++;
	}
	copyStr[b] = '\0';
	return (copyStr);
}

