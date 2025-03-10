#include "logic.h"

double find_arithmetic_mean(double& sum, int& count, int* array, int size)
{
	sum = 0;
	count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != 0)
		{
			sum += array[i];
			count++;
		}
	}

	return sum / count;
}