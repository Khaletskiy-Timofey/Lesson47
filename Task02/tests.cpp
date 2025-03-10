#include "logic.h"
#include "tests.h"
#include "utils.h"

void print(string name, int* numbers, int size, bool flag, double sum, int count, double result)
{
	cout << name << ": " << (flag ? "PASS" : "FAIL") << "\n\tArray: "
		<< array_to_string(numbers, size) << "\n\tSum: " << sum << "\n\tCount: " 
		<< count << "\n\tResult: " << result << endl;
}

void test01()
{
	int numbers[]{ 23, 0, 45, -5, 12, 0, -2, 30, 0, 64 };
	int size = 10;

	double expected_sum = 167.0;
	int expected_count = 7;
	double actual_sum;
	int actual_count;
	double actual = find_arithmetic_mean(actual_sum, actual_count, numbers, size);

	print("Test01", numbers, size, 
		expected_sum == actual_sum && expected_count == actual_count && actual == expected_sum / expected_count, 
		actual_sum, actual_count, actual);
}

void test02()
{
	int numbers[]{ 4, 0, 56, 12, -3, 0, 5, -7, 91, 12 };
	int size = 10;

	double expected_sum = 170;
	int expected_count = 8;
	double actual_sum;
	int actual_count;
	double actual = find_arithmetic_mean(actual_sum, actual_count, numbers, size);

	print("Test02", numbers, size,
		expected_sum == actual_sum && expected_count == actual_count && actual == expected_sum / expected_count,
		actual_sum, actual_count, actual);
}

void test03()
{
	int numbers[]{ 1, 0, 0, 3 };
	int size = 4;

	double expected_sum = 4;
	int expected_count = 2;
	double actual_sum;
	int actual_count;
	double actual = find_arithmetic_mean(actual_sum, actual_count, numbers, size);

	print("Test03", numbers, size,
		expected_sum == actual_sum && expected_count == actual_count && actual == expected_sum / expected_count,
		actual_sum, actual_count, actual);
}

void test04()
{
	int numbers[]{ 0, 0, 1, 0, 0 };
	int size = 5;

	double expected_sum = 1;
	int expected_count = 1;
	double actual_sum;
	int actual_count;
	double actual = find_arithmetic_mean(actual_sum, actual_count, numbers, size);

	print("Test04", numbers, size,
		expected_sum == actual_sum && expected_count == actual_count && actual == expected_sum / expected_count,
		actual_sum, actual_count, actual);
}