#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, eins, zwei;

	if (array == NULL)
		return (-1);
	for (eins = 0, zwei = size - 1; zwei >= eins;)
	{
		printf("Searching in array: ");
		for (i = eins; i < zwei; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = eins + (zwei - eins) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			zwei = i - 1;
		else
			eins = i + 1;
	}
	return (-1);
}
