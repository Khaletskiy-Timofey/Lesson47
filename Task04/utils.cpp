#include "utils.h"

string array_to_string(int* array, int size)
{
	string array_string = "";

	for (int i = 0; i < size; i++)
	{
		array_string += to_string(array[i]) + " ";
	}

	return array_string;
}