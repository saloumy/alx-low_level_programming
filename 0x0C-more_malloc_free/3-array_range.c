#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: type int minimum size
 * @max: type int maximum size
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}

