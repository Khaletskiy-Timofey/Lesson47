#include "logic.h"

int find_max_element(int* array, int size)
{
	int max_idx = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[i]) > abs(array[max_idx]))
		{
			max_idx = i;
		}
	}

	return max_idx;
}

int find_min_element(int* array, int size)
{
	int min_idx = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[i]) < abs(array[min_idx]))
		{
			min_idx = i;
		}
	}

	return min_idx;
}

int calculate_sum(int* array, int size)
{
	int max_idx = find_max_element(array, size);
	int min_idx = find_min_element(array, size);

	if (max_idx < min_idx)
	{
		int t = max_idx;
		max_idx = min_idx;
		min_idx = t;
	}

	int sum = 0;

	for (int i = min_idx + 1; i < max_idx; i++)
	{
		sum += array[i];
	}

	return sum;
}