#include "logic.h"
#include "tests.h"
#include "utils.h"

void print(string name, int* numbers, int size, bool flag, int local_min, int local_max)
{
	cout << name << ": " << (flag ? "PASS" : "FAIL") << "\n\tArray: "
		<< array_to_string(numbers, size) << "\n\tLocal min's: " << local_min 
		<< "\n\tLocal max's: " << local_max << endl;
}

void test01()
{
	int numbers[]{ -7, 2, 5, -4, -6, 11, 9 };
	int size = 7;

	int expected_local_min = 3;
	int expected_local_max = 2;
	int actual_local_min, actual_local_max;
	find_local_numbers(actual_local_min, actual_local_max, numbers, size);

	print("Test01", numbers, size,
		actual_local_min == expected_local_min && actual_local_max == expected_local_max,
		actual_local_min, actual_local_max);
}

void test02()
{
	int numbers[]{ 12, 4, 5, 7, 15, 4, 16, 12, 13, 7 };
	int size = 10;

	int expected_local_min = 4;
	int expected_local_max = 4;
	int actual_local_min, actual_local_max;
	find_local_numbers(actual_local_min, actual_local_max, numbers, size);

	print("Test02", numbers, size,
		actual_local_min == expected_local_min && actual_local_max == expected_local_max,
		actual_local_min, actual_local_max);
}

void test03()
{
	int numbers[]{ 1, 1, 1, 1, 1, 1 };
	int size = 6;

	int expected_local_min = 0;
	int expected_local_max = 0;
	int actual_local_min, actual_local_max;
	find_local_numbers(actual_local_min, actual_local_max, numbers, size);

	print("Test03", numbers, size,
		actual_local_min == expected_local_min && actual_local_max == expected_local_max,
		actual_local_min, actual_local_max);
}

void test04()
{
	int numbers[]{ 1, 2 };
	int size = 2;

	int expected_local_min = 1;
	int expected_local_max = 1;
	int actual_local_min, actual_local_max;
	find_local_numbers(actual_local_min, actual_local_max, numbers, size);

	print("Test04", numbers, size,
		actual_local_min == expected_local_min && actual_local_max == expected_local_max,
		actual_local_min, actual_local_max);
}

void test05()
{
	int numbers[]{ 1, 2, 3 };
	int size = 3;

	int expected_local_min = 1;
	int expected_local_max = 1;
	int actual_local_min, actual_local_max;
	find_local_numbers(actual_local_min, actual_local_max, numbers, size);

	print("Test05", numbers, size,
		actual_local_min == expected_local_min && actual_local_max == expected_local_max,
		actual_local_min, actual_local_max);
}