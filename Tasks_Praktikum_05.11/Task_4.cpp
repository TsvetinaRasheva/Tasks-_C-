#include <iostream>
using namespace std;

int main()
{
	cout << "Insert number : ";
	int num_lenght;
	cin >> num_lenght;

	const int ARR_LENGHT = 100;

	int array_of_nums[ARR_LENGHT] = { 0 };
	bool is_find_right_num = false;
	int index_of_number = -1;
	double sum = 0.0;

	for (size_t i = 0; i < num_lenght; i++)
	{
		cin >> array_of_nums[i];
	}

	for (size_t i = 0; i < num_lenght; i++)
	{
		if (array_of_nums[i] >= 0)
		{
			is_find_right_num = true;
			index_of_number = i;
			break;
		}
	}

	if (!is_find_right_num)
	{
		cout << "Invalid Input!";
		return 0;
	}

	cout << "Elements are ";

	for (size_t i = index_of_number; i < num_lenght; i++)
	{
		sum += array_of_nums[i];

		cout << array_of_nums[i] << " ";
	}

	cout << "\nSum is " << sum;

	return 0;
}

