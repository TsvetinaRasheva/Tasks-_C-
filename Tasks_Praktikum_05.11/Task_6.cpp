#include <iostream>
using namespace std;

int main()
{
	cout << "Insert symbol: ";
	char element;
	cin >> element;

	const int ARR_LENGHT = 10;
	char array_of_nums[ARR_LENGHT] = { 0 };

	int counter_symbols = 0;

	cout << "Insert elements of array: \n";

	for (size_t i = 0; i < ARR_LENGHT; i++)
	{
		cin >> array_of_nums[i];
	}

	cout << "Array is ";
	for (size_t i = 0; i < ARR_LENGHT; i++)
	{
		cout << array_of_nums[i]<<" ";
	}

	for (size_t i = 0; i < ARR_LENGHT; i++)
	{
		if (element == array_of_nums[i])
		{
			counter_symbols++;
			array_of_nums[i] = '*';
		}
	}

	cout << "\nNumber of symbols is "<< counter_symbols <<"\nNew array is ";
	for (size_t i = 0; i < ARR_LENGHT; i++)
	{
		cout << array_of_nums[i] << " ";
	}

	return 0;

}
//Цикълът, който принти масива е най-удачно да го изкарам във
//функция, но не сме го учили, та го оставям така.