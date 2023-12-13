#include "search_algos.h"

/**
  * _binary_search -function that searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: -1.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t y;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (y = left; y < right; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[y]);

		y = left + (right - left) / 2;
		if (array[y] == value)
			return (y);
		if (array[y] > value)
			right = y - 1;
		else
			left = y + 1;
	}

	return (-1);
}

/**
  * exponential_search - function that searches for a value in a sorted
  * array of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	right = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, right);
	return (_binary_search(array, x / 2, right, value));
}
