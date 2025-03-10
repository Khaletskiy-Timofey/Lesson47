#include "logic.h"
#include "tests.h"
#include "utils.h"

void print(string name, int* numbers, int size, int result, bool flag)
{
	cout << name << ": " << (flag ? "PASS" : "FAIL") << "\n\tArray: " 
		<< array_to_string(numbers, size) << "\n\tResult: " << result << endl;
}

void test01()
{
	int numbers[]{ -1, 2, -3, 4, -5, 6, -7, 8, -9, 10 };
	int size = 10;

	int expected = -4;
	int actual = calculate_sum(numbers, size);

	print("Test01", numbers, size, actual, actual == expected);
}

void test02()
{
	int numbers[]{ 7, 5, 1 };
	int size = 3;

	int expected = 5;
	int actual = calculate_sum(numbers, size);

	print("Test02", numbers, size, actual, actual == expected);
}

void test03()
{
	int numbers[]{ 1, 3, 2, 3 };
	int size = 4;

	int expected = 0;
	int actual = calculate_sum(numbers, size);

	print("Test03", numbers, size, actual, actual == expected);
}

void test04()
{
	int numbers[]{ 4, 5, 1, 2, 3 };
	int size = 5;

	int expected = 0;
	int actual = calculate_sum(numbers, size);

	print("Test04", numbers, size, actual, actual == expected);
}

void test05()
{
	int numbers[]{ 1 };
	int size = 1;

	int expected = 0;
	int actual = calculate_sum(numbers, size);

	print("Test05", numbers, size, actual, actual == expected);
}