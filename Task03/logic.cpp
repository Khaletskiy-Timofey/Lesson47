#include "logic.h"

int find_max_element(int* array, int size)
{
	int max_idx = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] > array[max_idx])
		{
			max_idx = i;
		}
	}

	return array[max_idx];
}

int find_min_element(int* array, int size)
{
	int min_idx = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] < array[min_idx])
		{
			min_idx = i;
		}
	}

	return array[min_idx];
}

double find_arithmetic_mean(int& min, int& max, int* array, int size)
{
	min = find_min_element(array, size);
	max = find_max_element(array, size);

	double sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != min && array[i] != max)
		{
			sum += array[i];
			count++;
		}
	}

	return sum / count;
}