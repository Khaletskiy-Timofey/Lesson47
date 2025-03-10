#include "logic.h"
#include "tests.h"
#include "utils.h"

void print(string name, string old_array, int* numbers, int size, bool flag, int start, int end, bool is_in_ascending_order)
{
	cout << name << ": " << (flag ? "PASS" : "FAIL") << "\n\tArray: "
		<< old_array << "\n\tRange: " << start << " " << end << "\n\tSort type: " 
		<< (is_in_ascending_order ? "ascending" : "descending") 
		<< "\n\tSorted array: " << array_to_string(numbers, size) << endl;
}

void test01()
{
	int numbers[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 10;
	int start = 1;
	int end = 8;
	bool is_in_ascending_order = true;

	string array_string = array_to_string(numbers, size);
	string expected = "12 4 4 5 7 10 15 17 23 7 ";

	sort(numbers, size, start, end, is_in_ascending_order);

	print("Test01", array_string, numbers, size, 
		array_to_string(numbers, size) == expected, start, end, is_in_ascending_order);
}

void test02()
{
	int numbers[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 10;
	int start = 1;
	int end = 8;
	bool is_in_ascending_order = false;

	string array_string = array_to_string(numbers, size);
	string expected = "12 23 17 15 10 7 5 4 4 7 ";

	sort(numbers, size, start, end, is_in_ascending_order);

	print("Test02", array_string, numbers, size,
		array_to_string(numbers, size) == expected, start, end, is_in_ascending_order);
}

void test03()
{
	int numbers[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 10;
	int start = 8;
	int end = 1;
	bool is_in_ascending_order = false;

	string array_string = array_to_string(numbers, size);
	string expected = "12 23 17 15 10 7 5 4 4 7 ";

	sort(numbers, size, start, end, is_in_ascending_order);

	print("Test03", array_string, numbers, size,
		array_to_string(numbers, size) == expected, start, end, is_in_ascending_order);
}

void test04()
{
	int numbers[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 10;
	int start = 1;
	int end = 2;
	bool is_in_ascending_order = false;

	string array_string = array_to_string(numbers, size);
	string expected = "12 5 4 7 15 4 10 17 23 7 ";

	sort(numbers, size, start, end, is_in_ascending_order);

	print("Test04", array_string, numbers, size,
		array_to_string(numbers, size) == expected, start, end, is_in_ascending_order);
}

void test05()
{
	int numbers[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 10;
	int start = 1;
	int end = 4;
	bool is_in_ascending_order = true;

	string array_string = array_to_string(numbers, size);
	string expected = "12 4 5 7 15 4 10 17 23 7 ";

	sort(numbers, size, start, end, is_in_ascending_order);

	print("Test05", array_string, numbers, size,
		array_to_string(numbers, size) == expected, start, end, is_in_ascending_order);
}