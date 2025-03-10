#include "logic.h"

void sort_in_ascending_order(int* array, int size, int start, int end)
{
	int length = end - start;

	for (int i = 0; i < length; i++)
	{
		int count = end - i;

		for (int j = start; j < count; j++)
		{

			if (array[j] > array[j + 1])
			{
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
}

void sort_in_descending_order(int* array, int size, int start, int end)
{
	int length = end - start;

	for (int i = 0; i < length; i++)
	{
		int count = end - i;

		for (int j = start; j < count; j++)
		{

			if (array[j] < array[j + 1])
			{
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
}

void sort(int* array, int size, int start, int end, bool is_in_ascending_order)
{
	if (start > end)
	{
		int t = start;
		start = end;
		end = t;
	}

	if (is_in_ascending_order)
	{
		sort_in_ascending_order(array, size, start, end);
	}
	else
	{
		sort_in_descending_order(array, size, start, end);
	}
}