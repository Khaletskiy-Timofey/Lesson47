#include "logic.h"
#include "tests.h"
#include "utils.h"

void print(string name, int* numbers, int size, bool flag, int min, int max, double result)
{
	cout << name << ": " << (flag ? "PASS" : "FAIL") << "\n\tArray: "
		<< array_to_string(numbers, size) << "\n\tMin: " << min << "\n\tMax: "
		<< max << "\n\tResult: " << result << endl;
}

void test01()
{
	int numbers[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 10;

	int expected_min = 4;
	int expected_max = 23;
	double expected = 73.0 / 7;
	int actual_min, actual_max;
	double actual = find_arithmetic_mean(actual_min, actual_max, numbers, size);

	print("Test01", numbers, size,
		actual_min == expected_min && actual_max == expected_max && actual == expected,
		actual_min, actual_max, actual);
}

void test02()
{
	int numbers[]{ 4, 1, 56, 12, 3, 1, 5, 7, 56, 12 };
	int size = 10;

	int expected_min = 1;
	int expected_max = 56;
	double expected = 43.0 / 6;
	int actual_min, actual_max;
	double actual = find_arithmetic_mean(actual_min, actual_max, numbers, size);

	print("Test02", numbers, size,
		actual_min == expected_min && actual_max == expected_max && actual == expected,
		actual_min, actual_max, actual);
}

void test03()
{
	int numbers[]{ 1, 2, 3 };
	int size = 3;

	int expected_min = 1;
	int expected_max = 3;
	double expected = 2.0;
	int actual_min, actual_max;
	double actual = find_arithmetic_mean(actual_min, actual_max, numbers, size);

	print("Test03", numbers, size,
		actual_min == expected_min && actual_max == expected_max && actual == expected,
		actual_min, actual_max, actual);
}

void test04()
{
	int numbers[]{ 1, 2, 5, 1, 4, 1, 5, 1, 5 };
	int size = 9;

	int expected_min = 1;
	int expected_max = 5;
	double expected = 3.0;
	int actual_min, actual_max;
	double actual = find_arithmetic_mean(actual_min, actual_max, numbers, size);

	print("Test04", numbers, size,
		actual_min == expected_min && actual_max == expected_max && actual == expected,
		actual_min, actual_max, actual);
}

void test05()
{
	int numbers[]{ 10, 20, 30 };
	int size = 3;

	int expected_min = 10;
	int expected_max = 30;
	double expected = 20.0;
	int actual_min, actual_max;
	double actual = find_arithmetic_mean(actual_min, actual_max, numbers, size);

	print("Test05", numbers, size,
		actual_min == expected_min && actual_max == expected_max && actual == expected,
		actual_min, actual_max, actual);
}