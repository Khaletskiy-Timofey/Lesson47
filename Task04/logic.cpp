#include "logic.h"

int calculate_locals_min(int* array, int size)
{
	int local_min = 0;

	local_min += array[0] < array[1];
	local_min += array[size - 1] < array[size - 2];

	int length = size - 1;

	for (int i = 1; i < length; i++)
	{
		if (array[i] < array[i - 1] && array[i] < array[i + 1])
		{
			local_min++;
		}
	}

	return local_min;
}

int calculate_locals_max(int* array, int size)
{
	int local_max = 0;

	local_max += array[0] > array[1];
	local_max += array[size - 1] > array[size - 2];

	int length = size - 1;

	for (int i = 1; i < length; i++)
	{
		if (array[i] > array[i - 1] && array[i] > array[i + 1])
		{
			local_max++;
		}
	}

	return local_max;
}

void find_local_numbers(int& local_min, int& local_max, int* array, int size)
{
	local_min = calculate_locals_min(array, size);
	local_max = calculate_locals_max(array, size);
}